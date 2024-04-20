/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:56:37 by gyeepach          #+#    #+#             */
/*   Updated: 2024/04/20 19:08:11 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *c, ...); // ฟังก์ชั่นหลัก
int	ft_putstr(char *str); // แสดงผลกลุ่มข้อความ
int	ft_putnbr(int n); // แสดงผลตัวเลขฐาน10
int	ft_puthexa(unsigned long n, int base); // แสดงผลเลขฐาน16
int	ft_putchar(int c); // แสดงผลตัวอักษร
int	ft_putaddress(void *p); // แสดงผลที่อยู่ของข้อมูลนั้นๆ เช่น 0x******
int	ft_putunsigned(unsigned int n); // --

// ไว้สำหรับรองรับฟังก์ชั่นย่อยๆที่จะนำไปใช้กับฟังก์ชั่นของprintf 
// และฟังก์ชั่นย่อยๆประกอบไปด้วย ft_put ต่างๆที่เกี่ยวกับการแสดงผลของdata type ต่างๆ!!!

#endif