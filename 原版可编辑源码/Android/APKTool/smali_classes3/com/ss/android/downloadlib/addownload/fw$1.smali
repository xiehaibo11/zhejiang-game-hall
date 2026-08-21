.class Lcom/ss/android/downloadlib/addownload/fw$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/n;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/download/api/config/n;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/fw;

.field final synthetic rg:Lcom/ss/android/download/api/config/n;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/fw;Lcom/ss/android/download/api/config/n;)V
    .locals 0

    .line 212
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw$1;->df:Lcom/ss/android/downloadlib/addownload/fw;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw$1;->rg:Lcom/ss/android/download/api/config/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 1

    .line 215
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw$1;->rg:Lcom/ss/android/download/api/config/n;

    invoke-interface {v0}, Lcom/ss/android/download/api/config/n;->rg()V

    return-void
.end method

.method public rg(Ljava/lang/String;)V
    .locals 7

    .line 220
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->q()Lcom/ss/android/download/api/config/hq;

    move-result-object v0

    .line 221
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw$1;->df:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/downloadlib/addownload/fw;)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object v1

    iget-object v3, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    const/4 v1, 0x1

    const-string v4, "\u60a8\u5df2\u7981\u6b62\u4f7f\u7528\u5b58\u50a8\u6743\u9650\uff0c\u8bf7\u6388\u6743\u540e\u518d\u4e0b\u8f7d"

    const/4 v5, 0x0

    const/4 v6, 0x1

    .line 220
    invoke-interface/range {v0 .. v6}, Lcom/ss/android/download/api/config/hq;->rg(ILandroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Ljava/lang/String;Landroid/graphics/drawable/Drawable;I)V

    .line 223
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw$1;->df:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/fw;->df(Lcom/ss/android/downloadlib/addownload/fw;)J

    move-result-wide v1

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(JI)V

    .line 224
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw$1;->rg:Lcom/ss/android/download/api/config/n;

    invoke-interface {v0, p1}, Lcom/ss/android/download/api/config/n;->rg(Ljava/lang/String;)V

    return-void
.end method
