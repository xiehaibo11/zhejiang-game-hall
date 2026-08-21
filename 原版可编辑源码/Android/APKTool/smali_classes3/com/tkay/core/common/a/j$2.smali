.class final Lcom/tkay/core/common/a/j$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a/j;->a(Lcom/tkay/core/common/a/i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/a/i;

.field final synthetic b:Lcom/tkay/core/common/a/j;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/a/j;Lcom/tkay/core/common/a/i;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/tkay/core/common/a/j$2;->b:Lcom/tkay/core/common/a/j;

    iput-object p2, p0, Lcom/tkay/core/common/a/j$2;->a:Lcom/tkay/core/common/a/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 92
    :try_start_0
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/core/common/a/j$2;->a:Lcom/tkay/core/common/a/i;

    invoke-virtual {v1}, Lcom/tkay/core/common/a/i;->b()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 93
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 94
    invoke-virtual {v0}, Ljava/io/File;->delete()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 98
    :catchall_0
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/a/j$2;->b:Lcom/tkay/core/common/a/j;

    invoke-static {v0}, Lcom/tkay/core/common/a/j;->a(Lcom/tkay/core/common/a/j;)Lcom/tkay/core/common/c/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/a/j$2;->a:Lcom/tkay/core/common/a/i;

    invoke-virtual {v1}, Lcom/tkay/core/common/a/i;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/c/m;->c(Ljava/lang/String;)V

    return-void
.end method
