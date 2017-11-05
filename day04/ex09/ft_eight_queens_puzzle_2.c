/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:48:58 by aschnapp          #+#    #+#             */
/*   Updated: 2017/10/28 20:23:37 by aschnapp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *c);

void	ft_eight_queens_puzzle_2(void)
{
	// ft_putstr("16837425\n17468253\n17582463\n24683175\n25713864\n25741863\n");
	// ft_putstr("27368514\n27581463\n28613574\n31758246\n35281746\n35286471\n");
	// ft_putstr("35714286\n35841726\n36258174\n36271485\n36275184\n36418572\n");
	// ft_putstr("36428571\n36814752\n36815724\n36824175\n37285146\n37286415\n");
	// ft_putstr("38471625\n41582736\n41586372\n42586137\n42736815\n42736851\n");
	// ft_putstr("42751863\n42857136\n42861357\n46152837\n46827135\n46831752\n");
	// ft_putstr("47185263\n47382516\n47526138\n47531682\n48136275\n48157263\n");
	// ft_putstr("48531726\n51468273\n51842736\n51863724\n52468317\n52473861\n");
	// ft_putstr("52617483\n52814736\n53168247\n53172864\n53847162\n57138642\n");
	// ft_putstr("57142863\n57248136\n57263148\n57263184\n57413862\n58413627\n");
	// ft_putstr("58417263\n61528374\n62713584\n62714853\n63175824\n63184275\n");
	// ft_putstr("63185247\n63571428\n63581427\n63724815\n63728514\n63741825\n");
	// ft_putstr("64158273\n64285713\n64713528\n64718253\n68241753\n71386425\n");
	// ft_putstr("72418536\n72631485\n73168524\n73825164\n74258136\n74286135\n");
	// ft_putstr("75316824\n82417536\n82531746\n83162574\n84136275\n");

	ft_putstr("15863724\n16837425\n17468253\n17582463\n24683175\n25713864\n");
	ft_putstr("25741863\n26174835\n26831475\n27368514\n27581463\n28613574\n");
	ft_putstr("31758246\n35281746\n35286471\n35714286\n35841726\n36258174\n");
	ft_putstr("36271485\n36275184\n36418572\n36428571\n36814752\n36815724\n");
	ft_putstr("36824175\n37285146\n37286415\n38471625\n41582736\n41586372\n");
	ft_putstr("42586137\n42736815\n42736851\n42751863\n42857136\n42861357\n");
	ft_putstr("46152837\n46827135\n46831752\n47185263\n47382516\n47526138\n");
	ft_putstr("47531682\n48136275\n48157263\n48531726\n51468273\n51842736\n");
	ft_putstr("51863724\n52468317\n52473861\n52617483\n52814736\n53168247\n");
	ft_putstr("53172864\n53847162\n57138642\n57142863\n57248136\n57263148\n");
	ft_putstr("57263184\n57413862\n58413627\n58417263\n61528374\n62713584\n");
	ft_putstr("62714853\n63175824\n63184275\n63185247\n63571428\n63581427\n");
	ft_putstr("63724815\n63728514\n63741825\n64158273\n64285713\n64713528\n");
	ft_putstr("64718253\n68241753\n71386425\n72418536\n72631485\n73168524\n");
	ft_putstr("73825164\n74258136\n74286135\n75316824\n82417536\n82531746\n");
	ft_putstr("83162574\n84136275\n");
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[++i])
	{
		ft_putchar(c[i]);
	}
}