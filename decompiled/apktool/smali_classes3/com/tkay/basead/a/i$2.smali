.class final Lcom/tkay/basead/a/i$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/i;->a(Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a;

.field final synthetic b:Lcom/tkay/core/common/f/h;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/tkay/basead/a/i;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/i;Lcom/tkay/basead/a;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/tkay/basead/a/i$2;->e:Lcom/tkay/basead/a/i;

    iput-object p2, p0, Lcom/tkay/basead/a/i$2;->a:Lcom/tkay/basead/a;

    iput-object p3, p0, Lcom/tkay/basead/a/i$2;->b:Lcom/tkay/core/common/f/h;

    iput-object p4, p0, Lcom/tkay/basead/a/i$2;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/basead/a/i$2;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 10

    .line 66
    iget-object v0, p0, Lcom/tkay/basead/a/i$2;->e:Lcom/tkay/basead/a/i;

    iget-object v0, v0, Lcom/tkay/basead/a/i;->b:Landroid/content/Context;

    check-cast v0, Landroid/app/Application;

    iget-object v1, p0, Lcom/tkay/basead/a/i$2;->a:Lcom/tkay/basead/a;

    invoke-virtual {v0, v1}, Landroid/app/Application;->unregisterActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 67
    iget-object v0, p0, Lcom/tkay/basead/a/i$2;->e:Lcom/tkay/basead/a/i;

    iget-object v0, v0, Lcom/tkay/basead/a/i;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/basead/a/i$2;->b:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 69
    iget-object v1, p0, Lcom/tkay/basead/a/i$2;->c:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/basead/a/i$2;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/a/i$2;->d:Ljava/lang/String;

    const/4 v4, 0x6

    const/4 v5, 0x0

    const-wide/16 v6, 0x0

    const-wide/16 v8, 0x0

    invoke-static/range {v1 .. v9}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    :cond_0
    return-void
.end method
