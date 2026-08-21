.class Lcom/ss/android/downloadlib/addownload/compliance/rg$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/compliance/pt$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/compliance/rg;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$2;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Landroid/graphics/Bitmap;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 96
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$2;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->df(Lcom/ss/android/downloadlib/addownload/compliance/rg;)Lcom/ss/android/downloadlib/guide/install/ClipImageView;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/guide/install/ClipImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    goto :goto_0

    :cond_0
    const/16 p1, 0x8

    .line 98
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/rg$2;->rg:Lcom/ss/android/downloadlib/addownload/compliance/rg;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/compliance/rg;->rg(Lcom/ss/android/downloadlib/addownload/compliance/rg;)J

    move-result-wide v0

    invoke-static {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(IJ)V

    :goto_0
    return-void
.end method
