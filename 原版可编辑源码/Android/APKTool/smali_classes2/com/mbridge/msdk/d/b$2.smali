.class final Lcom/mbridge/msdk/d/b$2;
.super Ljava/lang/Object;
.source "ShortCutsManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/d/b;->a(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:I

.field final synthetic c:Lcom/mbridge/msdk/d/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/d/b;Ljava/lang/String;I)V
    .locals 0

    .line 671
    iput-object p1, p0, Lcom/mbridge/msdk/d/b$2;->c:Lcom/mbridge/msdk/d/b;

    iput-object p2, p0, Lcom/mbridge/msdk/d/b$2;->a:Ljava/lang/String;

    iput p3, p0, Lcom/mbridge/msdk/d/b$2;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 675
    iget-object v0, p0, Lcom/mbridge/msdk/d/b$2;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 676
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/d/b$2;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_1

    .line 679
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 681
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/d/b$2;->c:Lcom/mbridge/msdk/d/b;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/c/a;)V

    .line 682
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 683
    iget v1, p0, Lcom/mbridge/msdk/d/b$2;->b:I

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 684
    iget-object v1, p0, Lcom/mbridge/msdk/d/b$2;->a:Ljava/lang/String;

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 685
    iget-object v0, p0, Lcom/mbridge/msdk/d/b$2;->c:Lcom/mbridge/msdk/d/b;

    invoke-static {v0}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/d/b;)Landroid/os/Handler;

    move-result-object v0

    const/16 v1, 0x2710

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    return-void
.end method
