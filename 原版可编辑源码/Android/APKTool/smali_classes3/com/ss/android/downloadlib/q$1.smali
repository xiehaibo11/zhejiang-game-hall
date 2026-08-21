.class Lcom/ss/android/downloadlib/q$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/q;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/q;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/ss/android/downloadlib/q$1;->rg:Lcom/ss/android/downloadlib/q;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    .line 81
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->q()Lcom/ss/android/download/api/config/hq;

    move-result-object v0

    .line 82
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v4, "\u65e0\u7f51\u7edc\uff0c\u8bf7\u68c0\u67e5\u7f51\u7edc\u8bbe\u7f6e"

    const/4 v1, 0x5

    const/4 v3, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    .line 81
    invoke-interface/range {v0 .. v6}, Lcom/ss/android/download/api/config/hq;->rg(ILandroid/content/Context;Lcom/ss/android/download/api/download/DownloadModel;Ljava/lang/String;Landroid/graphics/drawable/Drawable;I)V

    return-void
.end method
