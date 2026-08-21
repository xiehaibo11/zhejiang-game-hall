.class final Lcom/mbridge/msdk/advanced/c/c$1;
.super Ljava/lang/Object;
.source "NativeAdvancedProvider.java"

# interfaces
.implements Landroid/view/ViewTreeObserver$OnScrollChangedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/advanced/c/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/c/c;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/c/c$1;->a:Lcom/mbridge/msdk/advanced/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onScrollChanged()V
    .locals 4

    .line 81
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c$1;->a:Lcom/mbridge/msdk/advanced/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/c/c;->a(Lcom/mbridge/msdk/advanced/c/c;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 82
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c$1;->a:Lcom/mbridge/msdk/advanced/c/c;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/advanced/c/c;->a(Lcom/mbridge/msdk/advanced/c/c;Z)Z

    .line 83
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c$1;->a:Lcom/mbridge/msdk/advanced/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/c/c;->b(Lcom/mbridge/msdk/advanced/c/c;)Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c$1;->a:Lcom/mbridge/msdk/advanced/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/c/c;->b(Lcom/mbridge/msdk/advanced/c/c;)Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/advanced/c/c$1$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/advanced/c/c$1$1;-><init>(Lcom/mbridge/msdk/advanced/c/c$1;)V

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 92
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/c/c$1;->a:Lcom/mbridge/msdk/advanced/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/c/c;->c(Lcom/mbridge/msdk/advanced/c/c;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    return-void
.end method
