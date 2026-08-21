.class public Lcom/igexin/push/config/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/b/b;


# static fields
.field public static final a:Ljava/lang/String;

.field private static b:Lcom/igexin/push/config/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/push/config/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/config/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/push/config/a;
    .locals 1

    sget-object v0, Lcom/igexin/push/config/a;->b:Lcom/igexin/push/config/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/config/a;

    invoke-direct {v0}, Lcom/igexin/push/config/a;-><init>()V

    sput-object v0, Lcom/igexin/push/config/a;->b:Lcom/igexin/push/config/a;

    :cond_0
    sget-object v0, Lcom/igexin/push/config/a;->b:Lcom/igexin/push/config/a;

    return-object v0
.end method

.method private a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V
    .locals 2

    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string v1, "id"

    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p2, "value"

    invoke-virtual {v0, p2, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "config"

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteDatabase;->replace(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    return-void
.end method

.method private a(Landroid/database/sqlite/SQLiteDatabase;I[B)V
    .locals 2

    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string v1, "id"

    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p2, "value"

    invoke-virtual {v0, p2, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;[B)V

    const-string p2, "config"

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteDatabase;->replace(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    return-void
.end method

.method static synthetic a(Lcom/igexin/push/config/a;Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/igexin/push/config/a;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/igexin/push/config/a;Landroid/database/sqlite/SQLiteDatabase;I[B)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/igexin/push/config/a;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    return-void
.end method


# virtual methods
.method public a(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 3

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/config/f;

    invoke-direct {v1, p0, p1}, Lcom/igexin/push/config/f;-><init>(Lcom/igexin/push/config/a;Ljava/lang/String;)V

    const/4 p1, 0x1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method

.method public b()V
    .locals 4

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/config/b;

    invoke-direct {v1, p0}, Lcom/igexin/push/config/b;-><init>(Lcom/igexin/push/config/a;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method

.method public b(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 10

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    const-string v3, "config"

    const-string v2, "id"

    const-string v4, "value"

    filled-new-array {v2, v4}, [Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const-string v9, "id"

    move-object v2, p1

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-eqz p1, :cond_c

    :catch_0
    :cond_0
    :goto_0
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_c

    invoke-interface {p1, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/16 v3, 0x1a

    const/16 v4, 0x18

    const/4 v5, 0x1

    if-eq v2, v4, :cond_2

    if-eq v2, v3, :cond_2

    const/16 v6, 0x40

    if-ne v2, v6, :cond_1

    goto :goto_1

    :cond_1
    :try_start_2
    invoke-interface {p1, v5}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    move-object v7, v6

    move-object v6, v0

    goto :goto_2

    :cond_2
    :goto_1
    invoke-interface {p1, v5}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v6

    if-eqz v6, :cond_3

    sget-object v7, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v6, v7}, Lcom/igexin/b/a/a/a;->c([BLjava/lang/String;)[B

    move-result-object v6
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_3
    move-object v7, v0

    :goto_2
    if-nez v6, :cond_4

    if-nez v7, :cond_4

    goto :goto_0

    :cond_4
    const-string v8, "null"

    if-eq v2, v5, :cond_b

    const/4 v5, 0x2

    if-eq v2, v5, :cond_a

    const/4 v5, 0x3

    if-eq v2, v5, :cond_9

    const/16 v5, 0xf

    if-eq v2, v5, :cond_8

    const/16 v5, 0x10

    if-eq v2, v5, :cond_7

    if-eq v2, v4, :cond_6

    if-eq v2, v3, :cond_5

    goto :goto_0

    :cond_5
    :try_start_3
    new-instance v2, Ljava/lang/String;

    invoke-direct {v2, v6}, Ljava/lang/String;-><init>([B)V

    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3, v2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    invoke-static {v3}, Lcom/igexin/push/core/a/q;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/push/config/SDKUrlConfig;->setIdcConfigUrl([Ljava/lang/String;)V

    goto :goto_0

    :cond_6
    new-instance v2, Ljava/lang/String;

    invoke-direct {v2, v6}, Ljava/lang/String;-><init>([B)V

    invoke-static {v2, v1}, Lcom/igexin/push/config/l;->a(Ljava/lang/String;Z)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    :cond_7
    :try_start_4
    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    sput v2, Lcom/igexin/push/config/j;->e:I

    goto :goto_0

    :cond_8
    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    sput v2, Lcom/igexin/push/config/j;->d:I

    goto :goto_0

    :cond_9
    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v7}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    sput-wide v2, Lcom/igexin/push/config/j;->c:J

    goto/16 :goto_0

    :cond_a
    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    sput v2, Lcom/igexin/push/config/j;->b:I

    goto/16 :goto_0

    :cond_b
    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    sput v2, Lcom/igexin/push/config/j;->a:I

    goto/16 :goto_0

    :catchall_0
    move-exception v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/config/a;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto/16 :goto_0

    :catchall_1
    move-object v0, p1

    goto :goto_3

    :cond_c
    if-eqz p1, :cond_d

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_4

    :catchall_2
    :goto_3
    if-eqz v0, :cond_d

    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_d
    :goto_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/config/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|current ver = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "4.6.4.0"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", last ver = "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->J:Ljava/lang/String;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object p1, Lcom/igexin/push/core/d;->J:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_e

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/igexin/push/core/b/i;->e(Ljava/lang/String;)Z

    :cond_e
    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 3

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/config/g;

    invoke-direct {v1, p0, p1}, Lcom/igexin/push/config/g;-><init>(Lcom/igexin/push/config/a;Ljava/lang/String;)V

    const/4 p1, 0x1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method

.method public c()V
    .locals 4

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/config/c;

    invoke-direct {v1, p0}, Lcom/igexin/push/config/c;-><init>(Lcom/igexin/push/config/a;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method

.method public c(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 4

    sget v0, Lcom/igexin/push/config/j;->a:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/config/a;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget v0, Lcom/igexin/push/config/j;->b:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x2

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/config/a;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget-wide v0, Lcom/igexin/push/config/j;->c:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x3

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/config/a;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget v0, Lcom/igexin/push/config/j;->d:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const/16 v2, 0xf

    invoke-direct {p0, p1, v2, v0}, Lcom/igexin/push/config/a;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget-wide v2, Lcom/igexin/push/config/j;->c:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/config/a;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    return-void
.end method

.method public d()V
    .locals 4

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/config/d;

    invoke-direct {v1, p0}, Lcom/igexin/push/config/d;-><init>(Lcom/igexin/push/config/a;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method

.method public e()V
    .locals 4

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/config/e;

    invoke-direct {v1, p0}, Lcom/igexin/push/config/e;-><init>(Lcom/igexin/push/config/a;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method
