/*
** str_len.c for adventure in /home/keyrise/Work/Repositories/Epitech/GFX/gfx_tekadventure/srcs/misc/
**
** Made by Buyumad Anas
** Login   <buyuma_a@anas.buyumad@epitech.eu>
**
** Started on  Wed Apr 13 13:12:32 2016 Buyumad Anas
** Last update Wed Apr 20 18:20:55 2016 montag_v
*/

#include	"lemin.h"

int		str_len(char *string)
{
  return (*string) ? str_len(++string) + 1 : 0;
}
