.class Lcom/ss/android/downloadlib/addownload/compliance/pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/utils/Chain$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg(JJLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/ss/android/downloadlib/utils/Chain$rg<",
        "Ljava/lang/Object;",
        "Ljava/lang/Object;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/compliance/pt;

.field final synthetic rg:J


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/compliance/pt;J)V
    .locals 0

    .line 116
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/pt$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/pt;

    iput-wide p2, p0, Lcom/ss/android/downloadlib/addownload/compliance/pt$1;->rg:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 3

    .line 119
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/pt$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/pt;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg(Lcom/ss/android/downloadlib/addownload/compliance/pt;)Ljava/util/Map;

    move-result-object p1

    iget-wide v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/pt$1;->rg:J

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/ref/SoftReference;

    if-eqz p1, :cond_0

    .line 120
    invoke-virtual {p1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 121
    invoke-virtual {p1}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ss/android/downloadlib/addownload/compliance/pt$rg;

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/pt$1;->df:Lcom/ss/android/downloadlib/addownload/compliance/pt;

    iget-wide v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/pt$1;->rg:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/graphics/Bitmap;

    invoke-interface {p1, v0}, Lcom/ss/android/downloadlib/addownload/compliance/pt$rg;->rg(Landroid/graphics/Bitmap;)V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method
