.class Lcom/igexin/push/core/b/y;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/y;->a:Lcom/igexin/push/core/b/i;

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 5

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/y;->d:Landroid/database/sqlite/SQLiteDatabase;

    sget-object v2, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    const/4 v3, 0x2

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    iget-object v1, p0, Lcom/igexin/push/core/b/y;->d:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/igexin/push/core/b/y;->a:Lcom/igexin/push/core/b/i;

    sget-wide v3, Lcom/igexin/push/core/d;->t:J

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Ljava/lang/String;)[B

    move-result-object v2

    const/4 v3, 0x1

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;I[B)V

    iget-object v1, p0, Lcom/igexin/push/core/b/y;->d:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/igexin/push/core/b/y;->a:Lcom/igexin/push/core/b/i;

    sget-object v3, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Ljava/lang/String;)[B

    move-result-object v2

    const/16 v3, 0x14

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;I[B)V

    iget-object v0, p0, Lcom/igexin/push/core/b/y;->a:Lcom/igexin/push/core/b/i;

    invoke-static {v0}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;)V

    return-void
.end method
