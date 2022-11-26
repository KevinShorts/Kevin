from django.urls import path
from django.views import View
from django.conf.urls.static import static

from . import views

urlpatterns = [
    path('', views.store, name='store'),
    path('checkout/', views.checkout, name='checkout'),
]