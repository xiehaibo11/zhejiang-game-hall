.class Lcom/igexin/push/core/b/w;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Z

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;ZLjava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/w;->c:Lcom/igexin/push/core/b/i;

    iput-boolean p2, p0, Lcom/igexin/push/core/b/w;->a:Z

    iput-object p3, p0, Lcom/igexin/push/core/b/w;->b:Ljava/lang/String;

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 5

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/w;->d:Landroid/database/sqlite/SQLiteDatabase;

    iget-boolean v2, p0, Lcom/igexin/push/core/b/w;->a:Z

    if-eqz v2, :cond_0

    const/16 v2, 0x32

    goto :goto_0

    :cond_0
    const/16 v2, 0x31

    :goto_0
    iget-object v3, p0, Lcom/igexin/push/core/b/w;->c:Lcom/igexin/push/core/b/i;

    iget-object v4, p0, Lcom/igexin/push/core/b/w;->b:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Ljava/lang/String;)[B

    move-result-object v3

    invoke-static {v0, v1, v2, v3}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;I[B)V

    return-void
.end method
