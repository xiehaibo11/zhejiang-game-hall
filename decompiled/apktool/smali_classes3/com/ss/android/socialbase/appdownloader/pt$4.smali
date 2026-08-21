.class Lcom/ss/android/socialbase/appdownloader/pt$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/q/pp;)Lcom/ss/android/socialbase/downloader/depend/IDownloadNotificationEventListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/socialbase/appdownloader/pt;

.field final synthetic rg:Lcom/ss/android/socialbase/appdownloader/q/pp;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/appdownloader/pt;Lcom/ss/android/socialbase/appdownloader/q/pp;)V
    .locals 0

    .line 695
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->df:Lcom/ss/android/socialbase/appdownloader/pt;

    iput-object p2, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->rg:Lcom/ss/android/socialbase/appdownloader/q/pp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getNotifyProcessName()Ljava/lang/String;
    .locals 1

    .line 727
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->rg:Lcom/ss/android/socialbase/appdownloader/q/pp;

    invoke-interface {v0}, Lcom/ss/android/socialbase/appdownloader/q/pp;->rg()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public interceptAfterNotificationSuccess(Z)Z
    .locals 1

    .line 722
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->rg:Lcom/ss/android/socialbase/appdownloader/q/pp;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/appdownloader/q/pp;->rg(Z)Z

    move-result p1

    return p1
.end method

.method public onNotificationEvent(ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 703
    :pswitch_0
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->rg:Lcom/ss/android/socialbase/appdownloader/q/pp;

    invoke-interface {p1, p2}, Lcom/ss/android/socialbase/appdownloader/q/pp;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    goto :goto_0

    .line 700
    :pswitch_1
    iget-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->rg:Lcom/ss/android/socialbase/appdownloader/q/pp;

    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getAppContext()Landroid/content/Context;

    move-result-object p2

    invoke-interface {p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/q/pp;->rg(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    .line 706
    :pswitch_2
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->rg:Lcom/ss/android/socialbase/appdownloader/q/pp;

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getPackageName()Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/ss/android/socialbase/appdownloader/q/pp;->rg(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 713
    :cond_0
    :pswitch_3
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/pt$4;->rg:Lcom/ss/android/socialbase/appdownloader/q/pp;

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getStatus()I

    move-result v4

    invoke-virtual {p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->getDownloadTime()J

    move-result-wide v5

    move v2, p1

    move-object v3, p3

    invoke-interface/range {v1 .. v6}, Lcom/ss/android/socialbase/appdownloader/q/pp;->rg(ILjava/lang/String;IJ)V

    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0x5
        :pswitch_3
        :pswitch_3
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
