.class Lcom/ss/android/downloadlib/addownload/pp$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/n;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pp;->rg(ZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/pp;

.field final synthetic rg:Z


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;Z)V
    .locals 0

    .line 679
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$4;->df:Lcom/ss/android/downloadlib/addownload/pp;

    iput-boolean p2, p0, Lcom/ss/android/downloadlib/addownload/pp$4;->rg:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 3

    .line 682
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pp;->bm()Ljava/lang/String;

    move-result-object v0

    const-string v1, "pBCD start download"

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 683
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$4;->df:Lcom/ss/android/downloadlib/addownload/pp;

    iget-boolean v1, p0, Lcom/ss/android/downloadlib/addownload/pp$4;->rg:Z

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;Z)V

    return-void
.end method

.method public rg(Ljava/lang/String;)V
    .locals 2

    .line 688
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/pp;->bm()Ljava/lang/String;

    move-result-object p1

    const-string v0, "pBCD onDenied"

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/utils/bm;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method
