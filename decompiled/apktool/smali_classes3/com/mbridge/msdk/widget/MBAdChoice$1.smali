.class final Lcom/mbridge/msdk/widget/MBAdChoice$1;
.super Ljava/lang/Object;
.source "MBAdChoice.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/MBAdChoice;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/MBAdChoice;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/MBAdChoice;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBAdChoice$1;->a:Lcom/mbridge/msdk/widget/MBAdChoice;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 97
    invoke-static {}, Lcom/mbridge/msdk/widget/MBAdChoice;->a()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "AD choice load failed:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 0

    .line 92
    iget-object p2, p0, Lcom/mbridge/msdk/widget/MBAdChoice$1;->a:Lcom/mbridge/msdk/widget/MBAdChoice;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/widget/MBAdChoice;->setImageBitmap(Landroid/graphics/Bitmap;)V

    return-void
.end method
