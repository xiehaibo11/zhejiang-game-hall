.class Lcom/ss/android/downloadlib/addownload/q$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/df/pt;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/q;->rg(Lcom/ss/android/downloadlib/addownload/pp;ILcom/ss/android/download/api/download/DownloadModel;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:I

.field final synthetic pt:Lcom/ss/android/downloadlib/addownload/q;

.field final synthetic q:Lcom/ss/android/download/api/download/DownloadModel;

.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/pp;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/q;Lcom/ss/android/downloadlib/addownload/pp;ILcom/ss/android/download/api/download/DownloadModel;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/q$1;->pt:Lcom/ss/android/downloadlib/addownload/q;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/q$1;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    iput p3, p0, Lcom/ss/android/downloadlib/addownload/q$1;->df:I

    iput-object p4, p0, Lcom/ss/android/downloadlib/addownload/q$1;->q:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Z)V
    .locals 4

    .line 114
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/q$1;->pt:Lcom/ss/android/downloadlib/addownload/q;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/q$1;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    iget v2, p0, Lcom/ss/android/downloadlib/addownload/q$1;->df:I

    iget-object v3, p0, Lcom/ss/android/downloadlib/addownload/q$1;->q:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/ss/android/downloadlib/addownload/q;->rg(Lcom/ss/android/downloadlib/addownload/pp;ZILcom/ss/android/download/api/download/DownloadModel;)V

    return-void
.end method
