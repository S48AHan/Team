vowel = "aeiouAEIOU"
userWord = input('Give your Word:')
for i in userWord:
    if i in vowel:
        print('Got vowel')
        break
    print(i) 