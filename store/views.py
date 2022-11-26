from django.http import HttpResponse
from django.shortcuts import render

# Create your views here.

def store(request):  
   return render(request,'store.html')
def checkout(request):  
   return render(request,'checkout.html')