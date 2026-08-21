.class final Lcom/tramini/plugin/a/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tramini/plugin/a/g/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/b;->a(Landroid/content/Intent;Lcom/tramini/plugin/b/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tramini/plugin/b/a;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Lcom/tramini/plugin/a/b;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/b;ILjava/lang/String;Lcom/tramini/plugin/b/a;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/tramini/plugin/a/b$1;->f:Lcom/tramini/plugin/a/b;

    iput p2, p0, Lcom/tramini/plugin/a/b$1;->a:I

    iput-object p3, p0, Lcom/tramini/plugin/a/b$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tramini/plugin/a/b$1;->c:Lcom/tramini/plugin/b/a;

    iput-object p5, p0, Lcom/tramini/plugin/a/b$1;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tramini/plugin/a/b$1;->e:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tramini/plugin/a/c/a;)V
    .locals 2

    if-nez p1, :cond_0

    .line 109
    iget v0, p0, Lcom/tramini/plugin/a/b$1;->a:I

    const/16 v1, 0x12

    if-eq v0, v1, :cond_0

    const/16 v1, 0x13

    if-eq v0, v1, :cond_0

    const/16 v1, 0x14

    if-eq v0, v1, :cond_0

    return-void

    .line 113
    :cond_0
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    new-instance v0, Lcom/tramini/plugin/a/b$1$1;

    invoke-direct {v0, p0, p1}, Lcom/tramini/plugin/a/b$1$1;-><init>(Lcom/tramini/plugin/a/b$1;Lcom/tramini/plugin/a/c/a;)V

    invoke-static {v0}, Lcom/tramini/plugin/a/a/c;->a(Ljava/lang/Runnable;)V

    return-void
.end method
