#include <iostream>
#include <list>

int main()
{
    std::list<int> numbers;

    // =========================
    // Adding elements
    // =========================

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_front(5);

    std::cout << "After push_back / push_front:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    // =========================
    // emplace
    // =========================

    numbers.emplace_back(30);
    numbers.emplace_front(1);

    std::cout << "After emplace:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    // =========================
    // Access
    // =========================

    std::cout << "Front: " << numbers.front() << "\n";
    std::cout << "Back: " << numbers.back() << "\n";

    std::cout << "\n";

    // =========================
    // Iterators
    // =========================

    std::cout << "Using iterator:\n";

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }

    std::cout << "\n\n";

    // =========================
    // Insert
    // =========================

    auto it = numbers.begin();

    ++it; // Move to second element

    numbers.insert(it, 7);

    std::cout << "After insert:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    // =========================
    // Erase
    // =========================

    it = numbers.begin();
    ++it;

    numbers.erase(it);

    std::cout << "After erase:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    // =========================
    // Remove by value
    // =========================

    numbers.remove(20);

    std::cout << "After remove(20):\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    // =========================
    // pop_front / pop_back
    // =========================

    numbers.pop_front();
    numbers.pop_back();

    std::cout << "After pop_front / pop_back:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    // =========================
    // Size and empty
    // =========================

    std::cout << "Size: " << numbers.size() << "\n";
    std::cout << "Empty: "
              << (numbers.empty() ? "yes" : "no")
              << "\n\n";

    // =========================
    // List-specific operations
    // =========================

    numbers.push_back(100);
    numbers.push_back(50);
    numbers.push_back(50);
    numbers.push_back(200);

    numbers.sort();

    std::cout << "After sort:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    numbers.unique();

    std::cout << "After unique:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n\n";

    numbers.reverse();

    std::cout << "After reverse:\n";

    for (int x : numbers)
    {
        std::cout << x << " ";
    }

    std::cout << "\n";

    return 0;
}