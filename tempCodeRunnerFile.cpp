void play :: sum_up(){
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(g[j][i] && g[j][i]==g[j+1][i]){
				g[j][i]=g[j][i] + g[j+1][i];
				g[j+1][i]=0;
				score+=g[j][i];
				undo_score+=g[j][i];
			}
		}
	}
}