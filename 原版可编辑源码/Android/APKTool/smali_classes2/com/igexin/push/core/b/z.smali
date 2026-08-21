.class Lcom/igexin/push/core/b/z;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/z;->a:Lcom/igexin/push/core/b/i;

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/z;->d:Landroid/database/sqlite/SQLiteDatabase;

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object v2

    const/4 v3, 0x1

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;I[B)V

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/z;->d:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/igexin/push/core/b/z;->a:Lcom/igexin/push/core/b/i;

    sget-object v3, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Ljava/lang/String;)[B

    move-result-object v2

    const/16 v3, 0x14

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;I[B)V

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/d/d;->b(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/push/core/d/d;->a(Landroid/content/Context;J)V

    return-void
.end method
