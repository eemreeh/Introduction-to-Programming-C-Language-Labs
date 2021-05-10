from random import randint


def create_random_list():
    list1 = list()
    for i in range(randint(4, 9)):
        list1.append(randint(0, 9))
    return list1


def find_max(random_list):
    max = 0
    for i in random_list:
        if i >= max:
            max = i
    return max


def sort_array(random_list):
    list1 = list()
    while len(random_list) > 0:
        max = find_max(random_list)
        list1.append(max)
        random_list.remove(max)
    return list1


def main():
    random_list = create_random_list()
    print("Random list = \n" + str(random_list))
    print("Max element =" + str(find_max(random_list)))
    print("Sorted list \n" + str(sort_array(random_list)))


if __name__ == "__main__":
    main()
