.class public Lcom/igexin/push/extension/distribution/basic/d/b;
.super Ljava/lang/Object;


# static fields
.field public static a:Lcom/igexin/push/extension/distribution/basic/d/b;

.field private static final b:Ljava/lang/String;

.field private static c:Lcom/igexin/push/extension/distribution/basic/e/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "EXT-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/extension/distribution/basic/d/b;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/d/b;->b:Ljava/lang/String;

    const/4 v0, 0x0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/d/b;->c:Lcom/igexin/push/extension/distribution/basic/e/a;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/push/extension/distribution/basic/d/b;
    .locals 2

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/d/b;->a:Lcom/igexin/push/extension/distribution/basic/d/b;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/extension/distribution/basic/d/b;

    invoke-direct {v0}, Lcom/igexin/push/extension/distribution/basic/d/b;-><init>()V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/d/b;->a:Lcom/igexin/push/extension/distribution/basic/d/b;

    new-instance v0, Lcom/igexin/push/extension/distribution/basic/e/a;

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/push/extension/distribution/basic/e/a;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/d/b;->c:Lcom/igexin/push/extension/distribution/basic/e/a;

    :cond_0
    sget-object v0, Lcom/igexin/push/extension/distribution/basic/d/b;->a:Lcom/igexin/push/extension/distribution/basic/d/b;

    return-object v0
.end method


# virtual methods
.method public a(ILjava/lang/String;)V
    .locals 2

    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "key"

    invoke-virtual {v0, v1, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string p1, "value"

    invoke-virtual {v0, p1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    sget-object p1, Lcom/igexin/push/extension/distribution/basic/d/b;->c:Lcom/igexin/push/extension/distribution/basic/e/a;

    const-string p2, "extconfig"

    const/4 v1, 0x0

    invoke-virtual {p1, p2, v1, v0}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)V

    return-void
.end method

.method public a(J)V
    .locals 0

    sput-wide p1, Lcom/igexin/push/extension/distribution/basic/c/e;->i:J

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x6

    invoke-virtual {p0, p2, p1}, Lcom/igexin/push/extension/distribution/basic/d/b;->a(ILjava/lang/String;)V

    return-void
.end method

.method public b()V
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->e:Lcom/igexin/push/extension/distribution/basic/e/a;

    const-string v2, "select key, value from extconfig order by key"

    invoke-virtual {v1, v2, v0}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    if-eqz v0, :cond_6

    :catch_0
    :catchall_0
    :goto_0
    invoke-interface {v0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_6

    const-string v1, "key"

    invoke-interface {v0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 v2, 0xb

    const-string v3, "value"

    if-eq v1, v2, :cond_1

    const/16 v2, 0xc

    if-eq v1, v2, :cond_1

    const/16 v2, 0xe

    if-ne v1, v2, :cond_0

    goto :goto_1

    :cond_0
    :try_start_1
    invoke-interface {v0, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v0, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    goto :goto_2

    :cond_1
    :goto_1
    invoke-interface {v0, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v0, v2}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v2

    if-eqz v2, :cond_2

    invoke-static {v2}, Lcom/igexin/b/b/a;->c([B)[B

    move-result-object v2

    :cond_2
    if-nez v2, :cond_3

    goto :goto_0

    :cond_3
    new-instance v3, Ljava/lang/String;

    invoke-direct {v3, v2}, Ljava/lang/String;-><init>([B)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object v2, v3

    :goto_2
    const/4 v3, 0x4

    if-eq v1, v3, :cond_5

    const/4 v3, 0x6

    if-eq v1, v3, :cond_4

    goto :goto_0

    :cond_4
    :try_start_2
    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1

    sput-wide v1, Lcom/igexin/push/extension/distribution/basic/c/e;->i:J

    goto :goto_0

    :cond_5
    sput-object v2, Lcom/igexin/push/extension/distribution/basic/c/e;->d:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :cond_6
    if-eqz v0, :cond_8

    goto :goto_3

    :catchall_1
    move-exception v1

    if-eqz v0, :cond_7

    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_7
    throw v1

    :catch_1
    if-eqz v0, :cond_8

    :goto_3
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_8
    return-void
.end method
