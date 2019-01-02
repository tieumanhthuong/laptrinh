#su dung bai ex25 nhu mot thu vien !!!
from ex25 import *
# * nghia la dung tat ca cac ham co trong ex25
sentence = raw_input("Nhap vao 1 sentence:")
words = break_words(sentence)
sorted_words = sort_words(words)
print words
print "First word of sentence:" 
print_first_word(words)
print "Last word of sentence:" 
print_last_word(words)
print "First and last of the sentence:"
print_first_and_last(sentence)
print words
print "Sorted:"
print sorted_words
print "First word of sentence:" 
print_first_word(sorted_words)
print "Last word of sentence:" 
print_last_word(sorted_words)
print "First and last of the sentence:"
print_first_and_last_sorted(sentence)
print sorted_words