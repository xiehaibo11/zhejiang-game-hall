.class public Lcom/igexin/push/core/b/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/b/b;


# static fields
.field private static a:Lcom/igexin/push/core/b/e;


# instance fields
.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/igexin/push/core/bean/h;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    return-void
.end method

.method private a(B)I
    .locals 3

    iget-object v0, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/igexin/push/core/bean/h;

    invoke-virtual {v2}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v2

    if-ne v2, p1, :cond_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return v1
.end method

.method public static a()Lcom/igexin/push/core/b/e;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/b/e;->a:Lcom/igexin/push/core/b/e;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/b/e;

    invoke-direct {v0}, Lcom/igexin/push/core/b/e;-><init>()V

    sput-object v0, Lcom/igexin/push/core/b/e;->a:Lcom/igexin/push/core/b/e;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/b/e;->a:Lcom/igexin/push/core/b/e;

    return-object v0
.end method

.method private a(J)Lcom/igexin/push/core/bean/h;
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/igexin/push/core/bean/h;

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/h;->a()J

    move-result-wide v2

    cmp-long v2, v2, p1

    if-nez v2, :cond_0

    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private static b(Lcom/igexin/push/core/bean/h;)Landroid/content/ContentValues;
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    invoke-virtual {p0}, Lcom/igexin/push/core/bean/h;->a()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "id"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    invoke-virtual {p0}, Lcom/igexin/push/core/bean/h;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1}, Lcom/igexin/b/b/a;->b([B)[B

    move-result-object v1

    const-string v2, "data"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;[B)V

    invoke-virtual {p0}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v1

    invoke-static {v1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v1

    const-string v2, "type"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Byte;)V

    invoke-virtual {p0}, Lcom/igexin/push/core/bean/h;->d()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    const-string v1, "time"

    invoke-virtual {v0, v1, p0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    return-object v0
.end method

.method private b(B)V
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/igexin/push/core/bean/h;

    invoke-virtual {v2}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v3

    if-ne v3, p1, :cond_0

    move-object v0, v2

    :cond_1
    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/igexin/push/core/bean/h;->a()J

    move-result-wide v0

    const/4 p1, 0x1

    invoke-virtual {p0, v0, v1, p1, p1}, Lcom/igexin/push/core/b/e;->a(JZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method


# virtual methods
.method public a(JZZ)V
    .locals 2

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/core/b/e;->a(J)Lcom/igexin/push/core/bean/h;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_0
    if-eqz p3, :cond_1

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p3

    new-instance v1, Lcom/igexin/push/core/b/g;

    invoke-static {v0}, Lcom/igexin/push/core/b/e;->b(Lcom/igexin/push/core/bean/h;)Landroid/content/ContentValues;

    move-result-object v0

    invoke-direct {v1, p0, v0, p1, p2}, Lcom/igexin/push/core/b/g;-><init>(Lcom/igexin/push/core/b/e;Landroid/content/ContentValues;J)V

    xor-int/lit8 p1, p4, 0x1

    invoke-virtual {p3, v1, p4, p1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    :cond_1
    return-void
.end method

.method public a(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/igexin/push/core/bean/h;)V
    .locals 3

    if-eqz p1, :cond_2

    iget-object v0, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/16 v1, 0x13f

    if-lt v0, v1, :cond_0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v0

    const/4 v1, 0x7

    if-eq v0, v1, :cond_0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v0

    const/16 v1, 0x9

    if-eq v0, v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p1}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v0

    const/4 v1, 0x3

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto :goto_0

    :pswitch_1
    const/16 v0, 0x8

    invoke-direct {p0, v0}, Lcom/igexin/push/core/b/e;->a(B)I

    move-result v0

    if-lt v0, v1, :cond_1

    return-void

    :pswitch_2
    const/4 v0, 0x6

    invoke-direct {p0, v0}, Lcom/igexin/push/core/b/e;->a(B)I

    move-result v0

    const/16 v1, 0xa

    if-lt v0, v1, :cond_1

    return-void

    :pswitch_3
    const/4 v0, 0x5

    invoke-direct {p0, v0}, Lcom/igexin/push/core/b/e;->a(B)I

    move-result v0

    if-lt v0, v1, :cond_1

    return-void

    :pswitch_4
    invoke-direct {p0, v1}, Lcom/igexin/push/core/b/e;->a(B)I

    move-result v0

    const/16 v1, 0x12c

    if-lt v0, v1, :cond_1

    return-void

    :pswitch_5
    invoke-virtual {p1}, Lcom/igexin/push/core/bean/h;->c()B

    move-result v0

    invoke-direct {p0, v0}, Lcom/igexin/push/core/b/e;->b(B)V

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/core/b/f;

    invoke-static {p1}, Lcom/igexin/push/core/b/e;->b(Lcom/igexin/push/core/bean/h;)Landroid/content/ContentValues;

    move-result-object p1

    invoke-direct {v1, p0, p1}, Lcom/igexin/push/core/b/f;-><init>(Lcom/igexin/push/core/b/e;Landroid/content/ContentValues;)V

    const/4 p1, 0x0

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    :cond_2
    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x2
        :pswitch_5
        :pswitch_4
        :pswitch_0
        :pswitch_3
        :pswitch_2
        :pswitch_5
        :pswitch_1
        :pswitch_5
    .end packed-switch
.end method

.method public a(JJ)Z
    .locals 1

    invoke-direct {p0, p1, p2}, Lcom/igexin/push/core/b/e;->a(J)Lcom/igexin/push/core/bean/h;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0, p3, p4}, Lcom/igexin/push/core/bean/h;->a(J)V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p3

    new-instance p4, Lcom/igexin/push/core/b/h;

    invoke-static {v0}, Lcom/igexin/push/core/b/e;->b(Lcom/igexin/push/core/bean/h;)Landroid/content/ContentValues;

    move-result-object v0

    invoke-direct {p4, p0, v0, p1, p2}, Lcom/igexin/push/core/b/h;-><init>(Lcom/igexin/push/core/b/e;Landroid/content/ContentValues;J)V

    const/4 p1, 0x1

    invoke-virtual {p3, p4, p1, p1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/igexin/push/core/bean/h;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    return-object v0
.end method

.method public b(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 14

    const/4 v0, 0x0

    :try_start_0
    const-string v2, "ral"

    const-string v1, "id"

    const-string v3, "data"

    const-string v4, "type"

    const-string v5, "time"

    filled-new-array {v1, v3, v4, v5}, [Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v1, p1

    invoke-virtual/range {v1 .. v8}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    if-eqz v0, :cond_1

    :goto_0
    invoke-interface {v0}, Landroid/database/Cursor;->moveToNext()Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    invoke-interface {v0, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v4

    const/4 p1, 0x2

    invoke-interface {v0, p1}, Landroid/database/Cursor;->getInt(I)I

    move-result p1

    int-to-byte v7, p1

    const/4 p1, 0x3

    invoke-interface {v0, p1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v8

    sub-long v10, v1, v8

    const-wide/32 v12, 0xf731400

    cmp-long p1, v10, v12

    const/4 v3, 0x1

    if-lez p1, :cond_0

    invoke-virtual {p0, v4, v5, v3, v3}, Lcom/igexin/push/core/b/e;->a(JZZ)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/igexin/push/core/b/e;->b:Ljava/util/List;

    new-instance v10, Lcom/igexin/push/core/bean/h;

    new-instance v6, Ljava/lang/String;

    invoke-interface {v0, v3}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v3

    invoke-static {v3}, Lcom/igexin/b/b/a;->c([B)[B

    move-result-object v3

    invoke-direct {v6, v3}, Ljava/lang/String;-><init>([B)V

    move-object v3, v10

    invoke-direct/range {v3 .. v9}, Lcom/igexin/push/core/bean/h;-><init>(JLjava/lang/String;BJ)V

    invoke-interface {p1, v10}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_1
    if-eqz v0, :cond_3

    goto :goto_1

    :catchall_0
    move-exception p1

    if-eqz v0, :cond_2

    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_2
    throw p1

    :catch_0
    if-eqz v0, :cond_3

    :goto_1
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_3
    return-void
.end method

.method public c(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    return-void
.end method
