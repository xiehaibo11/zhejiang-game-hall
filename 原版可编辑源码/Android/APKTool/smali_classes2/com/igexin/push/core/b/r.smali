.class Lcom/igexin/push/core/b/r;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/r;->b:Lcom/igexin/push/core/b/i;

    iput-object p2, p0, Lcom/igexin/push/core/b/r;->a:Ljava/lang/String;

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/r;->d:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/igexin/push/core/b/r;->b:Lcom/igexin/push/core/b/i;

    iget-object v3, p0, Lcom/igexin/push/core/b/r;->a:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Ljava/lang/String;)[B

    move-result-object v2

    const/16 v3, 0x17

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;I[B)V

    return-void
.end method
