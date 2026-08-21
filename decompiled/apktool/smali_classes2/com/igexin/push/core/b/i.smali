.class public Lcom/igexin/push/core/b/i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/b/b;


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Lcom/igexin/push/core/b/i;


# instance fields
.field private c:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/push/core/b/i;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/push/core/b/i;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/b/i;->b:Lcom/igexin/push/core/b/i;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/b/i;

    invoke-direct {v0}, Lcom/igexin/push/core/b/i;-><init>()V

    sput-object v0, Lcom/igexin/push/core/b/i;->b:Lcom/igexin/push/core/b/i;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/b/i;->b:Lcom/igexin/push/core/b/i;

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

    const-string p2, "runtime"

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

    const-string p2, "runtime"

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteDatabase;->replace(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    return-void
.end method

.method static synthetic a(Lcom/igexin/push/core/b/i;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/b/i;->g()V

    return-void
.end method

.method static synthetic a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/igexin/push/core/b/i;Landroid/database/sqlite/SQLiteDatabase;I[B)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    return-void
.end method

.method private a(Landroid/database/sqlite/SQLiteDatabase;I)[B
    .locals 10

    const-string v0, "value"

    const/4 v1, 0x0

    :try_start_0
    const-string v3, "runtime"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v4

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "id="

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    move-object v2, p1

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_1

    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p2

    invoke-interface {p1, p2}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object p2

    sget-object v0, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {p2, v0}, Lcom/igexin/b/a/a/a;->c([BLjava/lang/String;)[B

    move-result-object p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_0

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_0
    return-object p2

    :catchall_0
    move-exception p2

    move-object v1, p1

    goto :goto_0

    :cond_1
    if-eqz p1, :cond_3

    goto :goto_1

    :catchall_1
    move-exception p2

    :goto_0
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_2
    throw p2

    :catch_0
    move-object p1, v1

    :catch_1
    if-eqz p1, :cond_3

    :goto_1
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_3
    return-object v1
.end method

.method static synthetic a(Lcom/igexin/push/core/b/i;Ljava/lang/String;)[B
    .locals 0

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->g(Ljava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method

.method private b(Landroid/database/sqlite/SQLiteDatabase;I)Ljava/lang/String;
    .locals 10

    const-string v0, "value"

    const/4 v1, 0x0

    :try_start_0
    const-string v3, "runtime"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v4

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "id="

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    move-object v2, p1

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_1

    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-interface {p1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p2

    invoke-interface {p1, p2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_0

    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_0
    return-object p2

    :catchall_0
    move-exception p2

    move-object v1, p1

    goto :goto_0

    :cond_1
    if-eqz p1, :cond_3

    goto :goto_1

    :catchall_1
    move-exception p2

    :goto_0
    if-eqz v1, :cond_2

    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_2
    throw p2

    :catch_0
    move-object p1, v1

    :catch_1
    if-eqz p1, :cond_3

    :goto_1
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    :cond_3
    return-object v1
.end method

.method private e()V
    .locals 6

    const-string v0, "V"

    sget-object v1, Lcom/igexin/push/core/d;->w:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, "|"

    const/4 v4, 0x0

    if-nez v2, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v2

    const/16 v5, 0x8

    if-gt v2, v5, :cond_1

    :cond_0
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {p0}, Lcom/igexin/push/core/b/i;->h()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v4, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/igexin/push/core/b/i;->h()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "A-"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    sget-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x40

    if-lt v0, v1, :cond_2

    :try_start_1
    sget-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    const/16 v1, 0x3e

    invoke-virtual {v0, v4, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v4, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_1
    return-void
.end method

.method private e(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 10

    const-string v0, "value"

    const/4 v1, 0x0

    :try_start_0
    const-string v3, "runtime"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "id=?"

    const-string v2, "25"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    move-object v2, p1

    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-interface {v1}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p1

    if-eqz p1, :cond_0

    new-instance p1, Ljava/lang/String;

    invoke-interface {v1, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v1, v0}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v0

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/igexin/b/a/a/a;->c([BLjava/lang/String;)[B

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/String;-><init>([B)V

    sput-object p1, Lcom/igexin/push/core/d;->E:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    if-eqz v1, :cond_2

    goto :goto_0

    :catchall_0
    move-exception p1

    if-eqz v1, :cond_1

    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_1
    throw p1

    :catch_0
    if-eqz v1, :cond_2

    :goto_0
    invoke-interface {v1}, Landroid/database/Cursor;->close()V

    :cond_2
    sget-object p1, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    if-nez p1, :cond_4

    sget-object p1, Lcom/igexin/push/core/d;->w:Ljava/lang/String;

    if-nez p1, :cond_3

    const-string p1, "cantgetimei"

    goto :goto_1

    :cond_3
    sget-object p1, Lcom/igexin/push/core/d;->w:Ljava/lang/String;

    :goto_1
    invoke-static {p1}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    sput-object p1, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    :cond_4
    return-void
.end method

.method private f(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    const/4 v0, 0x2

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/core/b/i;->b(Landroid/database/sqlite/SQLiteDatabase;I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "null"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    :cond_0
    sput-object p1, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method private f()Z
    .locals 4

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/core/b/y;

    invoke-direct {v1, p0}, Lcom/igexin/push/core/b/y;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result v0

    return v0
.end method

.method private g()V
    .locals 4

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

.method private g(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    const/16 v0, 0x2e

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/core/b/i;->b(Landroid/database/sqlite/SQLiteDatabase;I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "null"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    :cond_0
    sput-object p1, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method private g(Ljava/lang/String;)[B
    .locals 0

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object p1

    return-object p1
.end method

.method private h()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/util/Random;

    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    invoke-virtual {v1}, Ljava/util/Random;->nextLong()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Math;->abs(J)J

    move-result-wide v1

    invoke-direct {v0, v1, v2}, Ljava/util/Random;-><init>(J)V

    const-string v1, ""

    const/4 v2, 0x0

    :goto_0
    const/16 v3, 0xf

    if-ge v2, v3, :cond_0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0xa

    invoke-virtual {v0, v1}, Ljava/util/Random;->nextInt(I)I

    move-result v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-object v1
.end method

.method private h(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    const/16 v0, 0x30

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/core/b/i;->b(Landroid/database/sqlite/SQLiteDatabase;I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "null"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    :cond_0
    sput-object p1, Lcom/igexin/push/core/d;->C:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method private i(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    const/4 v0, 0x3

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/core/b/i;->b(Landroid/database/sqlite/SQLiteDatabase;I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "null"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    :cond_0
    sput-object p1, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method private j(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I)[B

    move-result-object p1

    if-eqz p1, :cond_1

    :try_start_0
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    const-string p1, "null"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-wide/16 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    :goto_0
    sput-wide v0, Lcom/igexin/push/core/d;->t:J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|db version changed, save session = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v0, Lcom/igexin/push/core/d;->t:J

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    return-void
.end method

.method private k(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    const/16 v0, 0x14

    invoke-direct {p0, p1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I)[B

    move-result-object p1

    if-eqz p1, :cond_1

    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    const-string p1, "null"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    :cond_0
    sput-object v0, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|db version changed, save cid = "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public a(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    return-void
.end method

.method public a(I)Z
    .locals 3

    sput p1, Lcom/igexin/push/core/d;->P:I

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/core/b/o;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/b/o;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public a(J)Z
    .locals 2

    invoke-static {p1, p2}, Lcom/igexin/push/core/d;->a(J)V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance p2, Lcom/igexin/push/core/b/z;

    invoke-direct {p2, p0}, Lcom/igexin/push/core/b/z;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v0, 0x0

    const/4 v1, 0x1

    invoke-virtual {p1, p2, v0, v1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public a(Ljava/lang/String;)Z
    .locals 3

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/core/b/x;

    invoke-direct {v1, p0, p1}, Lcom/igexin/push/core/b/x;-><init>(Lcom/igexin/push/core/b/i;Ljava/lang/String;)V

    const/4 p1, 0x0

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;J)Z
    .locals 0

    sput-wide p3, Lcom/igexin/push/core/d;->t:J

    sget-object p3, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    sput-object p2, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    :cond_0
    sput-object p1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-direct {p0}, Lcom/igexin/push/core/b/i;->f()Z

    move-result p1

    return p1
.end method

.method public a(Ljava/lang/String;Z)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    const/4 v2, 0x0

    const-string v3, "null"

    if-eqz p2, :cond_2

    sget-object p2, Lcom/igexin/push/core/d;->ah:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_4

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_1

    goto :goto_0

    :cond_1
    move-object v2, p1

    :goto_0
    sput-object v2, Lcom/igexin/push/core/d;->ah:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p2

    new-instance v2, Lcom/igexin/push/core/b/p;

    invoke-direct {v2, p0, p1}, Lcom/igexin/push/core/b/p;-><init>(Lcom/igexin/push/core/b/i;Ljava/lang/String;)V

    :goto_1
    invoke-virtual {p2, v2, v0, v1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_2
    sget-object p2, Lcom/igexin/push/core/d;->ai:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_4

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    goto :goto_2

    :cond_3
    move-object v2, p1

    :goto_2
    sput-object v2, Lcom/igexin/push/core/d;->ai:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p2

    new-instance v2, Lcom/igexin/push/core/b/q;

    invoke-direct {v2, p0, p1}, Lcom/igexin/push/core/b/q;-><init>(Lcom/igexin/push/core/b/i;Ljava/lang/String;)V

    goto :goto_1

    :cond_4
    return v0
.end method

.method public a(Z)Z
    .locals 3

    sget-boolean v0, Lcom/igexin/push/core/d;->K:Z

    const/4 v1, 0x0

    if-eq v0, p1, :cond_1

    sput-boolean p1, Lcom/igexin/push/core/d;->K:Z

    if-nez p1, :cond_0

    invoke-static {}, Lcom/igexin/push/f/a;->k()V

    :cond_0
    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/core/b/l;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/b/l;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_1
    return v1
.end method

.method public b()V
    .locals 4

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/core/b/j;

    invoke-direct {v1, p0}, Lcom/igexin/push/core/b/j;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method

.method public b(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 21

    move-object/from16 v1, p0

    move-object/from16 v10, p1

    const-string v11, "null"

    invoke-direct/range {p0 .. p1}, Lcom/igexin/push/core/b/i;->e(Landroid/database/sqlite/SQLiteDatabase;)V

    const/16 v13, 0xe

    const/16 v9, 0x14

    const/4 v8, 0x1

    const-wide/16 v16, 0x0

    const/4 v7, 0x0

    const/16 v18, 0x0

    :try_start_0
    const-string v3, "runtime"

    const-string v0, "id"

    const-string v2, "value"

    filled-new-array {v0, v2}, [Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v0, 0x0

    const/16 v19, 0x0

    const-string v20, "id"
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    move-object/from16 v2, p1

    move v15, v7

    move-object v7, v0

    move v14, v8

    move-object/from16 v8, v19

    move v12, v9

    move-object/from16 v9, v20

    :try_start_1
    invoke-virtual/range {v2 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    if-eqz v2, :cond_25

    :cond_0
    :goto_0
    :try_start_2
    invoke-interface {v2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v0

    if-eqz v0, :cond_25

    invoke-interface {v2, v15}, Landroid/database/Cursor;->getInt(I)I

    move-result v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/16 v3, 0x1f

    const/16 v4, 0x1e

    if-eq v0, v14, :cond_2

    if-eq v0, v13, :cond_2

    const/16 v5, 0x13

    if-eq v0, v5, :cond_2

    if-eq v0, v12, :cond_2

    const/16 v5, 0x17

    if-eq v0, v5, :cond_2

    const/16 v5, 0x19

    if-eq v0, v5, :cond_2

    const/16 v5, 0x16

    if-eq v0, v5, :cond_2

    if-eq v0, v3, :cond_2

    if-eq v0, v4, :cond_2

    const/16 v5, 0x31

    if-eq v0, v5, :cond_2

    const/16 v5, 0x32

    if-ne v0, v5, :cond_1

    goto :goto_1

    :cond_1
    :try_start_3
    invoke-interface {v2, v14}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v5

    move-object v6, v5

    move-object/from16 v5, v18

    goto :goto_2

    :cond_2
    :goto_1
    invoke-interface {v2, v14}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v5

    if-eqz v5, :cond_3

    sget-object v6, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v5, v6}, Lcom/igexin/b/a/a/a;->c([BLjava/lang/String;)[B

    move-result-object v5
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :cond_3
    move-object/from16 v6, v18

    :goto_2
    if-nez v5, :cond_4

    if-nez v6, :cond_4

    goto :goto_0

    :cond_4
    if-eq v0, v14, :cond_23

    const/4 v7, 0x2

    if-eq v0, v7, :cond_21

    const/4 v7, 0x3

    if-eq v0, v7, :cond_1f

    const/4 v7, 0x4

    if-eq v0, v7, :cond_1c

    const/4 v7, 0x6

    if-eq v0, v7, :cond_1a

    const/16 v7, 0x28

    if-eq v0, v7, :cond_18

    if-eq v0, v4, :cond_16

    if-eq v0, v3, :cond_14

    packed-switch v0, :pswitch_data_0

    packed-switch v0, :pswitch_data_1

    goto :goto_0

    :pswitch_0
    :try_start_4
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    move-wide/from16 v3, v16

    goto :goto_3

    :cond_5
    invoke-static {v6}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    :goto_3
    sput-wide v3, Lcom/igexin/push/core/d;->T:J

    goto :goto_0

    :pswitch_1
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_6

    move-object/from16 v0, v18

    :cond_6
    sput-object v0, Lcom/igexin/push/core/d;->ak:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|read last mobileRedirectCmList = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->ak:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v15, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :pswitch_2
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    move-object/from16 v0, v18

    :cond_7
    sput-object v0, Lcom/igexin/push/core/d;->aj:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|read last wifiRedirectCmList = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->aj:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v15, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :pswitch_3
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    move-object/from16 v6, v18

    :cond_8
    sput-object v6, Lcom/igexin/push/core/d;->C:Ljava/lang/String;

    goto/16 :goto_0

    :pswitch_4
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    move v7, v15

    goto :goto_4

    :cond_9
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    :goto_4
    sput v7, Lcom/igexin/push/core/d;->am:I

    goto/16 :goto_0

    :pswitch_5
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    move-object/from16 v6, v18

    :cond_a
    sput-object v6, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    goto/16 :goto_0

    :pswitch_6
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_b

    move-object/from16 v0, v18

    :cond_b
    sput-object v0, Lcom/igexin/push/core/d;->af:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|DT_ read last mobile result = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->af:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v15, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :pswitch_7
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    move-object/from16 v0, v18

    :cond_c
    sput-object v0, Lcom/igexin/push/core/d;->ag:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|DT_ read last wifi result = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->ag:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v15, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :pswitch_8
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_d

    move-wide/from16 v3, v16

    goto :goto_5

    :cond_d
    invoke-static {v6}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    :goto_5
    sput-wide v3, Lcom/igexin/push/core/d;->ae:J

    goto/16 :goto_0

    :pswitch_9
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_e

    move-object/from16 v0, v18

    :cond_e
    sput-object v0, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    goto/16 :goto_0

    :pswitch_a
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_f

    move-object/from16 v0, v18

    :cond_f
    sput-object v0, Lcom/igexin/push/core/d;->z:Ljava/lang/String;

    goto/16 :goto_0

    :pswitch_b
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_10

    move v7, v15

    goto :goto_6

    :cond_10
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    :goto_6
    sput v7, Lcom/igexin/push/core/d;->P:I

    goto/16 :goto_0

    :pswitch_c
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_11

    move-object/from16 v6, v18

    :cond_11
    sput-object v6, Lcom/igexin/push/core/d;->N:Ljava/lang/String;

    goto/16 :goto_0

    :pswitch_d
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_12

    move-wide/from16 v3, v16

    goto :goto_7

    :cond_12
    invoke-static {v6}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    :goto_7
    sput-wide v3, Lcom/igexin/push/core/d;->L:J

    goto/16 :goto_0

    :pswitch_e
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {v6}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v0

    sput-boolean v0, Lcom/igexin/push/core/d;->K:Z

    goto/16 :goto_0

    :pswitch_f
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    sput-object v0, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    goto/16 :goto_0

    :pswitch_10
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_13

    move-object/from16 v6, v18

    :cond_13
    sput-object v6, Lcom/igexin/push/core/d;->J:Ljava/lang/String;

    goto/16 :goto_0

    :cond_14
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_15

    move-object/from16 v0, v18

    :cond_15
    sput-object v0, Lcom/igexin/push/core/d;->ah:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|DT_ read last domainMobileStatus = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->ah:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v15, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :cond_16
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_17

    move-object/from16 v0, v18

    :cond_17
    sput-object v0, Lcom/igexin/push/core/d;->ai:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|DT_ read last domainWifiStatus = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->ai:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v15, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :cond_18
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_19

    invoke-static {v6}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_19

    move v8, v14

    goto :goto_8

    :cond_19
    move v8, v15

    :goto_8
    invoke-static {}, Lcom/igexin/push/d/b;->a()Lcom/igexin/push/d/b;

    move-result-object v0

    invoke-virtual {v0, v8}, Lcom/igexin/push/d/b;->a(Z)V

    goto/16 :goto_0

    :cond_1a
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1b

    move-wide/from16 v3, v16

    goto :goto_9

    :cond_1b
    invoke-static {v6}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    :goto_9
    sput-wide v3, Lcom/igexin/push/core/d;->H:J

    goto/16 :goto_0

    :cond_1c
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1e

    invoke-static {v6}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1d

    goto :goto_a

    :cond_1d
    move v8, v15

    goto :goto_b

    :cond_1e
    :goto_a
    move v8, v14

    :goto_b
    sput-boolean v8, Lcom/igexin/push/core/d;->m:Z

    goto/16 :goto_0

    :cond_1f
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_20

    move-object/from16 v6, v18

    :cond_20
    sput-object v6, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    goto/16 :goto_0

    :cond_21
    invoke-virtual {v6, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_22

    move-object/from16 v6, v18

    :cond_22
    sput-object v6, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    goto/16 :goto_0

    :cond_23
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, v5}, Ljava/lang/String;-><init>([B)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :try_start_5
    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_24

    move-wide/from16 v3, v16

    goto :goto_c

    :cond_24
    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    :goto_c
    sput-wide v3, Lcom/igexin/push/core/d;->t:J
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto/16 :goto_0

    :catch_0
    :try_start_6
    sput-wide v16, Lcom/igexin/push/core/d;->t:J

    goto/16 :goto_0

    :catchall_0
    move-exception v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v15, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    goto/16 :goto_0

    :catchall_1
    move-exception v0

    move-object/from16 v18, v2

    goto :goto_d

    :cond_25
    if-eqz v2, :cond_27

    goto :goto_e

    :catchall_2
    move-exception v0

    :goto_d
    if-eqz v18, :cond_26

    invoke-interface/range {v18 .. v18}, Landroid/database/Cursor;->close()V

    :cond_26
    throw v0

    :catch_1
    move v15, v7

    move v14, v8

    move v12, v9

    :catch_2
    move-object/from16 v2, v18

    :catch_3
    if-eqz v2, :cond_27

    :goto_e
    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_27
    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    cmp-long v0, v2, v16

    if-nez v0, :cond_28

    invoke-static {}, Lcom/igexin/push/util/c;->d()J

    move-result-wide v2

    cmp-long v0, v2, v16

    if-eqz v0, :cond_28

    sput-wide v2, Lcom/igexin/push/core/d;->t:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object v0

    invoke-direct {v1, v10, v14, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    :cond_28
    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    if-nez v0, :cond_29

    invoke-static {}, Lcom/igexin/push/util/c;->b()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_29

    sput-object v0, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object v0

    invoke-direct {v1, v10, v12, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    :cond_29
    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    if-nez v0, :cond_2a

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    cmp-long v0, v2, v16

    if-eqz v0, :cond_2a

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    invoke-static {v2, v3}, Lcom/igexin/push/core/d;->a(J)V

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object v0

    invoke-direct {v1, v10, v12, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    :cond_2a
    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    const-string v2, "cfcd208495d565ef66e7dff9f98764da"

    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2b

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    if-eqz v0, :cond_2d

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    const-string v2, "([a-f]|[0-9]){32}"

    invoke-virtual {v0, v2}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2d

    :cond_2b
    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    cmp-long v0, v2, v16

    if-eqz v0, :cond_2c

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    invoke-virtual {v0, v2, v3}, Lcom/igexin/push/core/b/i;->a(J)Z

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/util/c;->f()V

    goto :goto_f

    :cond_2c
    sput-object v18, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    sput-object v11, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    sput-wide v16, Lcom/igexin/push/core/d;->t:J

    :cond_2d
    :goto_f
    sget-object v0, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2e

    sget-object v0, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    invoke-virtual {v11, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2f

    :cond_2e
    const/16 v0, 0x20

    invoke-static {v0}, Lcom/igexin/b/b/a;->a(I)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    sget-object v0, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object v0

    invoke-direct {v1, v10, v13, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    :cond_2f
    invoke-static {}, Lcom/igexin/push/util/c;->c()Ljava/lang/String;

    move-result-object v0

    sget-object v2, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    const/4 v3, 0x5

    if-nez v2, :cond_30

    if-eqz v0, :cond_30

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v2

    if-le v2, v3, :cond_30

    sput-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    const/4 v2, 0x2

    invoke-direct {v1, v10, v2, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    :cond_30
    sget-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    if-nez v0, :cond_31

    invoke-direct/range {p0 .. p0}, Lcom/igexin/push/core/b/i;->e()V

    sget-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    const/4 v2, 0x3

    invoke-direct {v1, v10, v2, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget-object v0, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "new registerId : "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_31
    iget-boolean v0, v1, Lcom/igexin/push/core/b/i;->c:Z

    if-eqz v0, :cond_38

    iput-boolean v15, v1, Lcom/igexin/push/core/b/i;->c:Z

    sget-object v0, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_32

    sget-object v0, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/igexin/b/a/a/a;->d([BLjava/lang/String;)[B

    move-result-object v0

    const/16 v2, 0x19

    invoke-direct {v1, v10, v2, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    :cond_32
    sget-wide v4, Lcom/igexin/push/core/d;->t:J

    cmp-long v0, v4, v16

    if-eqz v0, :cond_33

    sget-wide v4, Lcom/igexin/push/core/d;->t:J

    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object v0

    invoke-direct {v1, v10, v14, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    :cond_33
    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_34

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->getBytesEncrypted([B)[B

    move-result-object v0

    invoke-direct {v1, v10, v12, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    :cond_34
    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_35

    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    if-le v0, v3, :cond_35

    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    const/4 v2, 0x2

    invoke-direct {v1, v10, v2, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    :cond_35
    sget-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_36

    sget-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    const/4 v2, 0x3

    invoke-direct {v1, v10, v2, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    :cond_36
    sget-object v0, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_37

    const/16 v0, 0x2e

    sget-object v2, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    invoke-direct {v1, v10, v0, v2}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    :cond_37
    sget-object v0, Lcom/igexin/push/core/d;->C:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_38

    const/16 v0, 0x30

    sget-object v2, Lcom/igexin/push/core/d;->C:Ljava/lang/String;

    invoke-direct {v1, v10, v0, v2}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    :cond_38
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0xd
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x2e
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public b(I)Z
    .locals 3

    sget v0, Lcom/igexin/push/core/d;->am:I

    const/4 v1, 0x0

    if-eq v0, p1, :cond_0

    sput p1, Lcom/igexin/push/core/d;->am:I

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/core/b/u;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/b/u;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_0
    return v1
.end method

.method public b(J)Z
    .locals 3

    sput-wide p1, Lcom/igexin/push/core/d;->ae:J

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|save idc config failed time : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v2, Lcom/igexin/push/core/b/ad;

    invoke-direct {v2, p0, p1, p2}, Lcom/igexin/push/core/b/ad;-><init>(Lcom/igexin/push/core/b/i;J)V

    const/4 p1, 0x1

    invoke-virtual {v0, v2, v1, p1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public b(Ljava/lang/String;)Z
    .locals 3

    sput-object p1, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/core/b/aa;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/b/aa;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public b(Ljava/lang/String;Z)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    const/4 v2, 0x0

    const-string v3, "null"

    if-eqz p2, :cond_2

    sget-object p2, Lcom/igexin/push/core/d;->af:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_4

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_1

    goto :goto_0

    :cond_1
    move-object v2, p1

    :goto_0
    sput-object v2, Lcom/igexin/push/core/d;->af:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p2

    new-instance v2, Lcom/igexin/push/core/b/r;

    invoke-direct {v2, p0, p1}, Lcom/igexin/push/core/b/r;-><init>(Lcom/igexin/push/core/b/i;Ljava/lang/String;)V

    :goto_1
    invoke-virtual {p2, v2, v0, v1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_2
    sget-object p2, Lcom/igexin/push/core/d;->ag:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_4

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_3

    goto :goto_2

    :cond_3
    move-object v2, p1

    :goto_2
    sput-object v2, Lcom/igexin/push/core/d;->ag:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p2

    new-instance v2, Lcom/igexin/push/core/b/s;

    invoke-direct {v2, p0, p1}, Lcom/igexin/push/core/b/s;-><init>(Lcom/igexin/push/core/b/i;Ljava/lang/String;)V

    goto :goto_1

    :cond_4
    return v0
.end method

.method public b(Z)Z
    .locals 3

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/core/b/v;

    invoke-direct {v1, p0, p1}, Lcom/igexin/push/core/b/v;-><init>(Lcom/igexin/push/core/b/i;Z)V

    const/4 p1, 0x0

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public c()V
    .locals 2

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/igexin/push/core/d;->t:J

    const-string v0, "null"

    sput-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-direct {p0}, Lcom/igexin/push/core/b/i;->f()Z

    return-void
.end method

.method public c(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    sget-wide v0, Lcom/igexin/push/core/d;->t:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/igexin/b/a/a/a;->d([BLjava/lang/String;)[B

    move-result-object v0

    const/4 v1, 0x1

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    sget-boolean v0, Lcom/igexin/push/core/d;->m:Z

    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x4

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    const/4 v1, 0x3

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/igexin/b/a/a/a;->d([BLjava/lang/String;)[B

    move-result-object v0

    const/16 v1, 0x14

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    const/4 v1, 0x2

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;ILjava/lang/String;)V

    sget-object v0, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/igexin/b/a/a/a;->d([BLjava/lang/String;)[B

    move-result-object v0

    const/16 v1, 0x19

    invoke-direct {p0, p1, v1, v0}, Lcom/igexin/push/core/b/i;->a(Landroid/database/sqlite/SQLiteDatabase;I[B)V

    return-void
.end method

.method public c(J)Z
    .locals 2

    sget-wide v0, Lcom/igexin/push/core/d;->L:J

    cmp-long v0, v0, p1

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    sput-wide p1, Lcom/igexin/push/core/d;->L:J

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance p2, Lcom/igexin/push/core/b/m;

    invoke-direct {p2, p0}, Lcom/igexin/push/core/b/m;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v0, 0x1

    invoke-virtual {p1, p2, v1, v0}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_0
    return v1
.end method

.method public c(Ljava/lang/String;)Z
    .locals 3

    sput-object p1, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/core/b/ab;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/b/ab;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public c(Ljava/lang/String;Z)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    const-string v1, "null"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    goto :goto_0

    :cond_1
    move-object v1, p1

    :goto_0
    if-eqz p2, :cond_2

    sget-object v2, Lcom/igexin/push/core/d;->ak:Ljava/lang/String;

    invoke-static {v2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    sput-object v1, Lcom/igexin/push/core/d;->ak:Ljava/lang/String;

    goto :goto_1

    :cond_2
    if-nez p2, :cond_3

    sget-object v2, Lcom/igexin/push/core/d;->aj:Ljava/lang/String;

    invoke-static {v2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    sput-object v1, Lcom/igexin/push/core/d;->aj:Ljava/lang/String;

    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|saveLastRedirectCmList isMobile = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", lastRedirectCmList = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v1

    new-instance v2, Lcom/igexin/push/core/b/w;

    invoke-direct {v2, p0, p2, p1}, Lcom/igexin/push/core/b/w;-><init>(Lcom/igexin/push/core/b/i;ZLjava/lang/String;)V

    const/4 p1, 0x1

    invoke-virtual {v1, v2, v0, p1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_3
    return v0
.end method

.method public d()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/b/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "| found a duplicate cid "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v0, 0x0

    sput-object v0, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-direct {p0}, Lcom/igexin/push/core/b/i;->e()V

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    sget-object v2, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/igexin/push/core/b/i;->a(Ljava/lang/String;)Z

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/b/i;->c()V

    sput v1, Lcom/igexin/push/core/d;->q:I

    invoke-static {}, Lcom/igexin/push/f/b/f;->i()Lcom/igexin/push/f/b/f;

    move-result-object v0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/f/b/f;->a(J)V

    return-void
.end method

.method public d(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/core/b/i;->c:Z

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->e(Landroid/database/sqlite/SQLiteDatabase;)V

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->j(Landroid/database/sqlite/SQLiteDatabase;)V

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->k(Landroid/database/sqlite/SQLiteDatabase;)V

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->i(Landroid/database/sqlite/SQLiteDatabase;)V

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->f(Landroid/database/sqlite/SQLiteDatabase;)V

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->g(Landroid/database/sqlite/SQLiteDatabase;)V

    invoke-direct {p0, p1}, Lcom/igexin/push/core/b/i;->h(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method public d(J)Z
    .locals 2

    sget-wide v0, Lcom/igexin/push/core/d;->H:J

    cmp-long v0, v0, p1

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    sput-wide p1, Lcom/igexin/push/core/d;->H:J

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance p2, Lcom/igexin/push/core/b/t;

    invoke-direct {p2, p0}, Lcom/igexin/push/core/b/t;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v0, 0x1

    invoke-virtual {p1, p2, v1, v0}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_0
    return v1
.end method

.method public d(Ljava/lang/String;)Z
    .locals 3

    sput-object p1, Lcom/igexin/push/core/d;->C:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/core/b/ac;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/b/ac;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1
.end method

.method public e(Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    sget-object v1, Lcom/igexin/push/core/d;->J:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    sput-object p1, Lcom/igexin/push/core/d;->J:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v1, Lcom/igexin/push/core/b/k;

    invoke-direct {v1, p0}, Lcom/igexin/push/core/b/k;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v2, 0x1

    invoke-virtual {p1, v1, v0, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return v2

    :cond_0
    return v0
.end method

.method public f(Ljava/lang/String;)Z
    .locals 3

    sget-object v0, Lcom/igexin/push/core/d;->N:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    sput-object p1, Lcom/igexin/push/core/d;->N:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/core/b/n;

    invoke-direct {v0, p0}, Lcom/igexin/push/core/b/n;-><init>(Lcom/igexin/push/core/b/i;)V

    const/4 v2, 0x1

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    move-result p1

    return p1

    :cond_0
    return v1
.end method
