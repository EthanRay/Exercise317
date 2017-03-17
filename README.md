<p class="poem-detail-main-text" id="body_p">                                
	<span id="body_1_0">                    <span style="font-size:18px;"><strong><span style="font-family:SimHei;">春江潮水连海平，                </span></strong></span></span><span style="font-size:18px;"><strong><span style="font-family:SimHei;">                                <span id="body_1_1">                    海上明月共潮生。                </span></span>                            </strong></span>
</p>
<span style="font-size:18px;"><strong>                                    </strong></span>
<p class="poem-detail-main-text" id="body_p">                                
	<span style="font-size:18px;"><strong><span id="body_2_0">                    <span style="font-family:KaiTi_GB2312;"><span class="body-zhushi-span">滟滟</span>随波千万里，                </span></span><span style="font-family:KaiTi_GB2312;">                                <span id="body_2_1">                    何处春江无月明！                </span></span></strong></span>                            
</p>
<span style="font-size:18px;"><strong>                                    </strong></span>
<p class="poem-detail-main-text" id="body_p">                                
	<span style="font-size:18px;"><strong><span id="body_3_0">                    <span style="font-family:Microsoft YaHei;">江流宛转绕<span class="body-zhushi-span">芳甸</span>，                </span></span><span style="font-family:Microsoft YaHei;">                                <span id="body_3_1">                    月照花林皆似<span class="body-zhushi-span">霰</span>；                </span></span></strong></span>                            
</p>
<span style="font-size:18px;"><strong>                                    </strong></span>
<p class="poem-detail-main-text" id="body_p">
	<span style="font-size:18px;"><strong>                                <span id="body_4_0">                    <span style="font-family:FangSong_GB2312;">空里<span class="body-zhushi-span">流霜</span>不觉飞，                </span></span><span style="font-family:FangSong_GB2312;">                                <span id="body_4_1">                    <span class="body-zhushi-span">汀</span>上白沙看不见。                </span></span></strong></span>                            
</p>                                    
<p class="poem-detail-main-text" id="body_p">                                
	<span id="body_5_0">                    <span style="font-family:KaiTi_GB2312;font-size:18px;"><em>江天一色无<span class="body-zhushi-span">纤尘</span>，                </em></span></span><span style="font-family:KaiTi_GB2312;font-size:18px;"><em>                                <span id="body_5_1">                    皎皎空中孤<span class="body-zhushi-span">月轮</span>。                </span>                            </em></span>
</p>
<span style="font-family:KaiTi_GB2312;font-size:18px;"><em>                                    </em></span>
<p class="poem-detail-main-text" id="body_p">                                
	<span style="font-family:KaiTi_GB2312;font-size:18px;"><em><span id="body_6_0">                    江畔何人初见月？                </span>                                <span id="body_6_1">                    江月何年初照人？                </span></em></span>                            
</p>
<span style="font-family:KaiTi_GB2312;font-size:18px;"><em>                                    </em></span>
<p class="poem-detail-main-text" id="body_p">                                
	<span style="font-family:KaiTi_GB2312;font-size:18px;"><em><span id="body_7_0">                    人生代代无<span class="body-zhushi-span">穷已</span>，                </span>                                <span id="body_7_1">                    <span class="body-zhushi-span">江月年年只相似</span>。                </span></em></span>                            
</p>
<span style="font-family:KaiTi_GB2312;font-size:18px;"><em>                                    </em></span>
<p class="poem-detail-main-text" id="body_p">
	<span style="font-family:KaiTi_GB2312;font-size:18px;"><em>                                <span id="body_8_0">                    不知江月待何人，                </span>                                </em></span><span id="body_8_1"><span style="font-family:KaiTi_GB2312;font-size:18px;"><em>                    <span class="body-zhushi-span">但见</span>长江送流水。</em></span></span>
</p>
<p class="poem-detail-main-text">
	<span id="body_8_1"><span style="font-family:KaiTi_GB2312;font-size:18px;"><em></em></span></span>
	<pre name="code" class="cpp">void dijkstra(int s)
{
	int dis[MAXVEX], used[MAXVEX], u;
	fill(dis, dis + V, INF);
	memset(used, 0, sizeof(used));
	dis[s] = 0;
	M cost;
	cost = GenEdgeMat();


	while (true)
	{
		int v = -1, mins = INF;
		for (int u = 0; u &lt; V; ++u)
		{
			if (used[u] == 0 &amp;&amp; dis[u] &lt; mins)
			{
				mins = dis[u];
				v = u;
			}
		}

		if (v == -1)break;
		used[v] = true;

		for (int u = 0; u &lt; V; ++u)
			dis[u] = min(dis[u], dis[v] + cost[v][u]);
	}

	for (int i = 0; i &lt; V; ++i)
		printf(&quot;%d %d\n&quot;, i, dis[i]);
}</pre>
	<br />
	<br />
	                                            
</p>                                    
<p class="poem-detail-main-text" id="body_p">                                
	<span id="body_9_0">                    <u><span style="font-size:18px;">白云一片去<span class="body-zhushi-span">悠悠</span>，                </span></u></span><u><span style="font-size:18px;">                                <span id="body_9_1">                    <span class="body-zhushi-span">青枫浦上</span>不胜愁。                </span>                            </span></u>
</p>
<u><span style="font-size:18px;">                                    </span></u>
<p class="poem-detail-main-text" id="body_p">                                
	<u><span style="font-size:18px;"><span id="body_10_0">                    谁家今夜<span class="body-zhushi-span">扁舟子</span>？                </span>                                <span id="body_10_1">                    何处相思<span class="body-zhushi-span">明月楼</span>？                </span></span></u>                            
</p>
<u><span style="font-size:18px;">                                    </span></u>
<p class="poem-detail-main-text" id="body_p">                                
	<u><span style="font-size:18px;"><span id="body_11_0">                    可怜楼上<span class="body-zhushi-span">月徘徊</span>，                </span>                                <span id="body_11_1">                    应照<span class="body-zhushi-span">离人</span><span class="body-zhushi-span">妆镜台</span>。                </span></span></u>                            
</p>
<u><span style="font-size:18px;">                                    </span></u>
<p class="poem-detail-main-text" id="body_p">
	<u><span style="font-size:18px;">                                <span id="body_12_0">                    <span class="body-zhushi-span">玉户</span>帘中卷不去，                </span>                                </span></u><span id="body_12_1"><u><span style="font-size:18px;">                    <span class="body-zhushi-span">捣衣砧</span>上拂还来</span></u>。                </span>                            
</p>                                    
<p class="poem-detail-main-text" id="body_p">                                
	<span id="body_13_0">                    <span style="font-family:Microsoft YaHei;font-size:14px;"><strong>此时相望不<span class="body-zhushi-span">相闻</span>，                </strong></span></span><span style="font-family:Microsoft YaHei;font-size:14px;"><strong>                                <span id="body_13_1">                    愿<span class="body-zhushi-span">逐</span><span class="body-zhushi-span">月华</span>流照君。                </span>                            </strong></span>
</p>
<span style="font-family:Microsoft YaHei;font-size:14px;"><strong>                                    </strong></span>
<p class="poem-detail-main-text" id="body_p">                                
	<span style="font-family:Microsoft YaHei;font-size:14px;"><strong><span id="body_14_0">                    鸿雁长飞光不度，                </span>                                <span id="body_14_1">                    鱼龙潜跃水成<span class="body-zhushi-span">文</span>。                </span></strong></span>                            
</p>
<span style="font-family:Microsoft YaHei;font-size:14px;"><strong>                                    </strong></span>
<p class="poem-detail-main-text" id="body_p">                                
	<span style="font-family:Microsoft YaHei;font-size:14px;"><strong><span id="body_15_0">                    <span style="background-color: rgb(0, 0, 0);"><span style="color:#FFFF33;">昨夜<span class="body-zhushi-span">闲潭</span>梦落花，                </span></span></span><span style="background-color: rgb(0, 0, 0);"><span style="color:#FFFF33;">                                <span id="body_15_1">                    可怜春半不还家。                </span></span></span></strong></span><span style="background-color: rgb(0, 0, 0);"><span style="color:#FFFF33;">                            </span></span>
</p>
<span style="background-color: rgb(0, 0, 0);"><span style="font-family:Microsoft YaHei;font-size:14px;color:#FFFF33;"><strong>                                    </strong></span></span>
<p class="poem-detail-main-text" id="body_p">
	<span style="background-color: rgb(0, 0, 0);"><span style="font-family:Microsoft YaHei;font-size:14px;color:#FFFF33;"><strong>                                <span id="body_16_0">                    江水流春去欲尽，                </span>                                </strong></span></span><span style="color:#FFFF33;"><span id="body_16_1"><span style="background-color: rgb(0, 0, 0);"><span style="font-family:Microsoft YaHei;font-size:14px;"><strong>                    江潭落月<span class="body-zhushi-span">复西斜</span></strong></span>。</span>                </span></span>                            
</p>                                    
<p class="poem-detail-main-text" id="body_p">                                
	<span id="body_17_0">                    <span style="color:#FF6600;">斜月沉沉藏海雾，                </span></span><span style="color:#FF6600;">                                <span id="body_17_1">                    碣石潇湘<span class="body-zhushi-span">无限路</span>。                </span>                            </span>
</p>
<span style="color:#FF6600;">                                    </span>
<p class="poem-detail-main-text" id="body_p">
	<span style="color:#FF6600;">                                <span id="body_18_0">                    不知<span class="body-zhushi-span">乘月</span>几人归，                </span>                                <span id="body_18_1">                    落月<span class="body-zhushi-span">摇情</span>满江树。                </span></span>                            
</p>
