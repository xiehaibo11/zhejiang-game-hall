.class final Lcom/mbridge/msdk/reward/adapter/d$a;
.super Lcom/mbridge/msdk/mbjscommon/c/a;
.source "RewardMVVideoAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private a:Lcom/mbridge/msdk/reward/adapter/d;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Lcom/mbridge/msdk/videocommon/a$a;

.field private e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private f:Z

.field private g:Z

.field private h:Lcom/mbridge/msdk/reward/adapter/d$b;

.field private i:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/reward/adapter/d$b;Landroid/os/Handler;)V
    .locals 0

    .line 814
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/a;-><init>()V

    .line 815
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->b:Ljava/lang/String;

    .line 816
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->c:Ljava/lang/String;

    .line 817
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->d:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p5, :cond_0

    .line 820
    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 822
    :cond_0
    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 823
    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->h:Lcom/mbridge/msdk/reward/adapter/d$b;

    .line 824
    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->i:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 3

    .line 829
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->g:Z

    if-nez p1, :cond_a

    .line 830
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->h:Lcom/mbridge/msdk/reward/adapter/d$b;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 831
    invoke-virtual {v0, p1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 834
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "CampaignTPL templete preload readyState state = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "RVWindVaneWebView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 835
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->b:Ljava/lang/String;

    const/4 v0, 0x1

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 838
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->d:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p1, :cond_1

    .line 839
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 843
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->c:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v1

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;IZ)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_7

    .line 844
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_7

    .line 845
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_7

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 846
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 847
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cmpt=1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 848
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->b:Ljava/lang/String;

    invoke-static {p2, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 853
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_tplid()I

    move-result p2

    const/4 v1, -0x1

    if-ne p2, v1, :cond_3

    .line 854
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    goto :goto_1

    .line 856
    :cond_3
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_tplid()I

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    .line 858
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p2, :cond_5

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->p(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result p2

    if-eqz p2, :cond_5

    .line 859
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p2

    if-eqz p2, :cond_4

    const-string p2, "RVWindVaneWebView"

    const-string v1, "Tempalte put templeteCache in bidIVCache "

    .line 860
    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p2, 0x11f

    .line 861
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->d:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {p2, v1, v2}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_0

    :cond_4
    const-string p2, "RVWindVaneWebView"

    const-string v1, "Tempalte put templeteCache in iVCache "

    .line 863
    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    .line 868
    :cond_5
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p2

    if-eqz p2, :cond_6

    const-string p2, "RVWindVaneWebView"

    const-string v1, "Tempalte put templeteCache in bidRVCache "

    .line 869
    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/16 p2, 0x5e

    .line 870
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->d:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {p2, v1, v2}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto/16 :goto_0

    :cond_6
    const-string p2, "RVWindVaneWebView"

    const-string v1, "Tempalte put templeteCache in rVCache "

    .line 872
    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_7
    :try_start_0
    const-string p1, "RVWindVaneWebView"

    const-string p2, "CampaignTPL TempalteWindVaneWebviewClient tempalte load SUCCESS "

    .line 883
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 884
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p1, :cond_9

    .line 885
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    monitor-enter p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string p2, "RVWindVaneWebView"

    const-string v1, "CampaignTPL adapter 341"

    .line 886
    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 887
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p2, :cond_8

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {p2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result p2

    if-eqz p2, :cond_8

    const-string p2, "RVWindVaneWebView"

    const-string v1, "CampaignTPL TempalteWindVaneWebviewClient tempalte load  callback success"

    .line 888
    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 889
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p2

    if-eqz p2, :cond_8

    .line 890
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v1, 0x6

    .line 891
    iput v1, p2, Landroid/os/Message;->what:I

    const-string v1, "RVWindVaneWebView"

    const-string v2, "WHAT_ON_RES_LOAD_SUCCESS TPL"

    .line 892
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 893
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->e:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 894
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 895
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object p2

    const/4 v1, 0x5

    invoke-virtual {p2, v1}, Landroid/os/Handler;->removeMessages(I)V

    const/4 p2, 0x0

    .line 896
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 899
    :cond_8
    monitor-exit p1

    goto :goto_2

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p2

    :cond_9
    const-string p1, "RVWindVaneWebView"

    const-string p2, "CampaignTPL TempalteWindVaneWebviewClient tempalte load SUCCESS  mRewardMVVideoAdapter is null"

    .line 901
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception p1

    .line 904
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v1, "RVWindVaneWebView"

    invoke-static {v1, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 906
    :goto_2
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->g:Z

    :cond_a
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 932
    invoke-super {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/mbjscommon/c/a;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    :try_start_0
    const-string p1, "RVWindVaneWebView"

    const-string p2, "CampaignTPL TempalteWindVaneWebviewClient tempalte load failed"

    .line 934
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 935
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p1, :cond_0

    .line 936
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    monitor-enter p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string p2, "RVWindVaneWebView"

    const-string v0, "CampaignTPL TempalteWindVaneWebviewClient tempalte load callback failed"

    .line 937
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 938
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p2, p3, p4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p2, 0x0

    .line 939
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->a:Lcom/mbridge/msdk/reward/adapter/d;

    .line 940
    monitor-exit p1

    goto :goto_0

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 943
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "RVWindVaneWebView"

    invoke-static {p3, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 923
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 924
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->f:Z

    if-nez p2, :cond_0

    .line 925
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    const/4 p1, 0x1

    .line 926
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/d$a;->f:Z

    :cond_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;II)V
    .locals 0

    return-void
.end method
