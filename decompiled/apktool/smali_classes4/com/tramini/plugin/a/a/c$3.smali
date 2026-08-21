.class final Lcom/tramini/plugin/a/a/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/a/c;->b(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tramini/plugin/a/a/c;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/a/c;Landroid/content/Context;)V
    .locals 0

    .line 209
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c$3;->b:Lcom/tramini/plugin/a/a/c;

    iput-object p2, p0, Lcom/tramini/plugin/a/a/c$3;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 212
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$3;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tramini/plugin/b/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tramini/plugin/b/b;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 213
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$3;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tramini/plugin/b/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/b/b;

    move-result-object v0

    new-instance v1, Lcom/tramini/plugin/a/a/c$3$1;

    invoke-direct {v1, p0}, Lcom/tramini/plugin/a/a/c$3$1;-><init>(Lcom/tramini/plugin/a/a/c$3;)V

    invoke-virtual {v0, v1}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/a/d/c;)V

    :cond_0
    return-void
.end method
