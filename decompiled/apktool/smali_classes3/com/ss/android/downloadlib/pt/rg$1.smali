.class Lcom/ss/android/downloadlib/pt/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/guide/install/rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/pt/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/rz;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/pt/rg;

.field final synthetic rg:Lcom/ss/android/socialbase/appdownloader/q/rz;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/socialbase/appdownloader/q/rz;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/ss/android/downloadlib/pt/rg$1;->df:Lcom/ss/android/downloadlib/pt/rg;

    iput-object p2, p0, Lcom/ss/android/downloadlib/pt/rg$1;->rg:Lcom/ss/android/socialbase/appdownloader/q/rz;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt/rg$1;->rg:Lcom/ss/android/socialbase/appdownloader/q/rz;

    invoke-interface {v0}, Lcom/ss/android/socialbase/appdownloader/q/rz;->rg()V

    return-void
.end method
