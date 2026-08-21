.class final Lcom/mbridge/msdk/d/b$4;
.super Ljava/lang/Object;
.source "ShortCutsManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/d/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/mbridge/msdk/d/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/d/b;Landroid/content/Context;)V
    .locals 0

    .line 734
    iput-object p1, p0, Lcom/mbridge/msdk/d/b$4;->b:Lcom/mbridge/msdk/d/b;

    iput-object p2, p0, Lcom/mbridge/msdk/d/b$4;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 737
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 739
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 741
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->C()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    .line 743
    invoke-static {}, Lcom/mbridge/msdk/d/a;->a()Lcom/mbridge/msdk/d/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/d/b$4;->a:Landroid/content/Context;

    sget v3, Lcom/mbridge/msdk/d/a;->c:I

    new-instance v4, Lcom/mbridge/msdk/d/b$4$1;

    invoke-direct {v4, p0, v0}, Lcom/mbridge/msdk/d/b$4$1;-><init>(Lcom/mbridge/msdk/d/b$4;Lcom/mbridge/msdk/c/a;)V

    .line 1056
    new-instance v0, Lcom/mbridge/msdk/d/a$1;

    invoke-direct {v0, v1, v2, v4, v3}, Lcom/mbridge/msdk/d/a$1;-><init>(Lcom/mbridge/msdk/d/a;Landroid/content/Context;Lcom/mbridge/msdk/d/a/a;I)V

    .line 1126
    new-instance v1, Lcom/mbridge/msdk/foundation/same/e/b;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    .line 1127
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/same/e/b;->b(Lcom/mbridge/msdk/foundation/same/e/a;)V

    :cond_1
    return-void
.end method
