.class public Lcom/xiaomi/push/cj$e;
.super Lcom/xiaomi/push/cj$a;


# instance fields
.field private a:Landroid/content/ContentValues;


# direct methods
.method public constructor <init>(Ljava/lang/String;Landroid/content/ContentValues;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/xiaomi/push/cj$a;-><init>(Ljava/lang/String;)V

    iput-object p2, p0, Lcom/xiaomi/push/cj$e;->a:Landroid/content/ContentValues;

    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    iget-object p1, p0, Lcom/xiaomi/push/cj$e;->b:Ljava/lang/String;

    iget-object v0, p0, Lcom/xiaomi/push/cj$e;->a:Landroid/content/ContentValues;

    const/4 v1, 0x0

    invoke-virtual {p2, p1, v1, v0}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    return-void
.end method
