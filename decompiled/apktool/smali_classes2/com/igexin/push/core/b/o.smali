.class Lcom/igexin/push/core/b/o;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/o;->a:Lcom/igexin/push/core/b/i;

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/o;->d:Landroid/database/sqlite/SQLiteDatabase;

    sget v2, Lcom/igexin/push/core/d;->P:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x12

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    return-void
.end method
