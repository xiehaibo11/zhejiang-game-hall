.class Lcom/igexin/push/core/b/ad;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:J

.field final synthetic b:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;J)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/ad;->b:Lcom/igexin/push/core/b/i;

    iput-wide p2, p0, Lcom/igexin/push/core/b/ad;->a:J

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/b/ad;->d:Landroid/database/sqlite/SQLiteDatabase;

    iget-wide v2, p0, Lcom/igexin/push/core/b/ad;->a:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x15

    invoke-static {v0, v1, v3, v2}, Lcom/igexin/push/core/b/i;->a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    return-void
.end method
