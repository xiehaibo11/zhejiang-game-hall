.class final Lcom/tramini/plugin/a/a/c$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/a/c;->b(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tramini/plugin/a/a/c;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/a/c;Ljava/lang/String;)V
    .locals 0

    .line 303
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c$5;->b:Lcom/tramini/plugin/a/a/c;

    iput-object p2, p0, Lcom/tramini/plugin/a/a/c$5;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 306
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$5;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v0}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "tramini"

    const-string v2, "P_CE_PE"

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tramini/plugin/a/g/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 307
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$5;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/tramini/plugin/a/g/c;->c(Ljava/lang/String;)V

    .line 309
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$5;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v0}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;Landroid/content/Context;)V

    return-void
.end method
