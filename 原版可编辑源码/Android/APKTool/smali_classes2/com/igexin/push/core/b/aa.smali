.class Lcom/igexin/push/core/b/aa;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/aa;->a:Lcom/igexin/push/core/b/i;

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/aa;->d:Landroid/database/sqlite/SQLiteDatabase;

    sget-object v2, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    const/4 v3, 0x2

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/util/c;->c()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v1, 0x5

    if-gt v0, v1, :cond_1

    :cond_0
    invoke-static {}, Lcom/igexin/push/util/c;->e()V

    :cond_1
    return-void
.end method
