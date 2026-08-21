.class Lcom/ss/android/downloadlib/pt/rg$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/guide/install/rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/pt/rg;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/pt/rg;

.field final synthetic rg:Lcom/ss/android/downloadlib/guide/install/rg;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/ss/android/downloadlib/pt/rg$3;->df:Lcom/ss/android/downloadlib/pt/rg;

    iput-object p2, p0, Lcom/ss/android/downloadlib/pt/rg$3;->rg:Lcom/ss/android/downloadlib/guide/install/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 1

    .line 63
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt/rg$3;->rg:Lcom/ss/android/downloadlib/guide/install/rg;

    invoke-interface {v0}, Lcom/ss/android/downloadlib/guide/install/rg;->rg()V

    return-void
.end method
