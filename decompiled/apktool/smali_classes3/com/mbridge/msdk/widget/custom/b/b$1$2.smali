.class final Lcom/mbridge/msdk/widget/custom/b/b$1$2;
.super Ljava/lang/Object;
.source "FastBlurUtil.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/b/b$1;->onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/b/b$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/b/b$1;)V
    .locals 0

    .line 305
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$2;->a:Lcom/mbridge/msdk/widget/custom/b/b$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 308
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/b$1$2;->a:Lcom/mbridge/msdk/widget/custom/b/b$1;

    iget-object v0, v0, Lcom/mbridge/msdk/widget/custom/b/b$1;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    const-string v1, "#e6e6e6"

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setBackgroundColor(I)V

    return-void
.end method
