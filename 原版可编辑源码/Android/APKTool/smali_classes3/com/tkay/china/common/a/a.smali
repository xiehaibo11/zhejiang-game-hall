.class public abstract Lcom/tkay/china/common/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/china/common/a/a$a;
    }
.end annotation


# static fields
.field public static final e:Ljava/lang/String; = ".temp"

.field public static final f:Ljava/lang/String; = ".log"

.field public static final g:Ljava/lang/String; = ".apk"

.field public static final h:I = 0x0

.field public static final i:I = 0x1

.field public static final j:I = 0x2

.field public static final k:I = 0x3

.field public static final l:I = 0x4

.field private static final u:Ljava/lang/String;


# instance fields
.field protected a:Ljava/lang/String;

.field protected b:Ljava/lang/String;

.field protected c:Z

.field protected d:Z

.field public m:I

.field protected n:J

.field protected o:J

.field protected p:J

.field protected q:J

.field protected r:J

.field protected s:J

.field protected t:J

.field private v:Lcom/tkay/china/common/a/a$a;

.field private w:Lcom/tkay/china/common/a/e;

.field private x:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    const-class v0, Lcom/tkay/china/common/a/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/common/a/a;->u:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/china/common/a/e;)V
    .locals 1

    .line 74
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 70
    iput v0, p0, Lcom/tkay/china/common/a/a;->m:I

    .line 75
    iput-object p1, p0, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    .line 76
    iget-object v0, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    .line 77
    iget-object p1, p1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/china/common/a/a;->b:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/china/common/a/a;Ljava/lang/String;Ljava/io/InputStream;)I
    .locals 0

    .line 34
    invoke-direct {p0, p1, p2}, Lcom/tkay/china/common/a/a;->a(Ljava/lang/String;Ljava/io/InputStream;)I

    move-result p0

    return p0
.end method

.method private a(Ljava/lang/String;Ljava/io/InputStream;)I
    .locals 21

    move-object/from16 v1, p0

    const-string v0, "rws"

    .line 306
    invoke-static/range {p1 .. p1}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 307
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x4

    if-eqz v3, :cond_0

    return v4

    .line 310
    :cond_0
    new-instance v3, Ljava/io/File;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ".temp"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v3, v5}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 311
    new-instance v5, Ljava/io/File;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ".log"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v5, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 v6, 0x0

    .line 316
    :try_start_0
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v7

    if-nez v7, :cond_2

    .line 317
    invoke-virtual {v3}, Ljava/io/File;->createNewFile()Z

    move-result v7

    .line 318
    invoke-virtual {v5}, Ljava/io/File;->createNewFile()Z

    move-result v8

    if-eqz v7, :cond_1

    if-nez v8, :cond_2

    :cond_1
    return v4

    .line 324
    :cond_2
    new-instance v7, Ljava/io/RandomAccessFile;

    invoke-direct {v7, v3, v0}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 325
    :try_start_1
    new-instance v8, Ljava/io/RandomAccessFile;

    invoke-direct {v8, v5, v0}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 327
    :try_start_2
    iget-wide v9, v1, Lcom/tkay/china/common/a/a;->n:J
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const-wide/16 v11, 0x0

    cmp-long v0, v9, v11

    const-string v6, "("

    if-lez v0, :cond_3

    .line 328
    :try_start_3
    sget-object v0, Lcom/tkay/china/common/a/a;->u:Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    iget-object v6, v6, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ")  seek to -> "

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v13, v1, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v9, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 329
    iget-wide v9, v1, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v7, v9, v10}, Ljava/io/RandomAccessFile;->seek(J)V

    goto :goto_0

    .line 331
    :cond_3
    sget-object v0, Lcom/tkay/china/common/a/a;->u:Ljava/lang/String;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    iget-object v6, v6, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ")  set temp file size -> "

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v13, v1, Lcom/tkay/china/common/a/a;->s:J

    invoke-virtual {v9, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 332
    iget-wide v9, v1, Lcom/tkay/china/common/a/a;->s:J

    invoke-virtual {v7, v9, v10}, Ljava/io/RandomAccessFile;->setLength(J)V

    :goto_0
    const/high16 v0, 0x100000

    new-array v0, v0, [B

    .line 336
    iget-wide v9, v1, Lcom/tkay/china/common/a/a;->n:J

    iput-wide v9, v1, Lcom/tkay/china/common/a/a;->t:J

    :goto_1
    const/4 v6, -0x1

    move-object/from16 v9, p2

    .line 337
    invoke-virtual {v9, v0}, Ljava/io/InputStream;->read([B)I

    move-result v10

    if-eq v6, v10, :cond_a

    .line 339
    iget-boolean v6, v1, Lcom/tkay/china/common/a/a;->d:Z

    if-eqz v6, :cond_5

    .line 340
    iget-object v0, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    if-eqz v0, :cond_4

    .line 341
    iget-object v0, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e;->k()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 387
    :cond_4
    :try_start_4
    invoke-virtual {v7}, Ljava/io/RandomAccessFile;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    move-object v2, v0

    .line 390
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 394
    :goto_2
    :try_start_5
    invoke-virtual {v8}, Ljava/io/RandomAccessFile;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_1

    goto :goto_3

    :catch_1
    move-exception v0

    move-object v2, v0

    .line 397
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    :goto_3
    const/4 v0, 0x2

    return v0

    .line 345
    :cond_5
    :try_start_6
    iget-boolean v6, v1, Lcom/tkay/china/common/a/a;->c:Z

    if-eqz v6, :cond_7

    .line 346
    iget-object v0, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    if-eqz v0, :cond_6

    .line 347
    iget-object v0, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e;->j()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 387
    :cond_6
    :try_start_7
    invoke-virtual {v7}, Ljava/io/RandomAccessFile;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_2

    goto :goto_4

    :catch_2
    move-exception v0

    move-object v2, v0

    .line 390
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 394
    :goto_4
    :try_start_8
    invoke-virtual {v8}, Ljava/io/RandomAccessFile;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_3

    goto :goto_5

    :catch_3
    move-exception v0

    move-object v2, v0

    .line 397
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    :goto_5
    const/4 v0, 0x3

    return v0

    :cond_7
    const/4 v6, 0x0

    .line 352
    :try_start_9
    invoke-virtual {v7, v0, v6, v10}, Ljava/io/RandomAccessFile;->write([BII)V

    .line 353
    iget-wide v13, v1, Lcom/tkay/china/common/a/a;->t:J

    move-object/from16 p1, v5

    int-to-long v4, v10

    add-long/2addr v13, v4

    iput-wide v13, v1, Lcom/tkay/china/common/a/a;->t:J

    .line 355
    iget-object v4, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    if-eqz v4, :cond_8

    .line 356
    iget-object v4, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    iput-wide v13, v4, Lcom/tkay/china/common/a/e;->g:J

    .line 359
    :cond_8
    invoke-virtual {v8, v11, v12}, Ljava/io/RandomAccessFile;->setLength(J)V

    .line 360
    iget-wide v4, v1, Lcom/tkay/china/common/a/a;->t:J

    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-virtual {v8, v4}, Ljava/io/RandomAccessFile;->write([B)V

    .line 362
    iget-object v4, v1, Lcom/tkay/china/common/a/a;->v:Lcom/tkay/china/common/a/a$a;

    if-eqz v4, :cond_9

    .line 363
    iget-object v4, v1, Lcom/tkay/china/common/a/a;->v:Lcom/tkay/china/common/a/a$a;

    iget-object v5, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    iget-wide v13, v1, Lcom/tkay/china/common/a/a;->t:J

    iget-wide v11, v1, Lcom/tkay/china/common/a/a;->s:J

    move-object v15, v4

    move-object/from16 v16, v5

    move-wide/from16 v17, v13

    move-wide/from16 v19, v11

    invoke-interface/range {v15 .. v20}, Lcom/tkay/china/common/a/a$a;->b(Lcom/tkay/china/common/a/e;JJ)V

    move-object/from16 v5, p1

    const/4 v4, 0x4

    const-wide/16 v11, 0x0

    goto/16 :goto_1

    :cond_9
    move-object/from16 v5, p1

    const/4 v4, 0x4

    goto/16 :goto_1

    :cond_a
    move-object/from16 p1, v5

    .line 368
    new-instance v0, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".apk"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v0}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    .line 370
    invoke-virtual/range {p1 .. p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_b

    .line 371
    invoke-virtual/range {p1 .. p1}, Ljava/io/File;->delete()Z

    .line 374
    :cond_b
    iget-object v0, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    if-eqz v0, :cond_c

    .line 375
    iget-object v0, v1, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e;->l()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    .line 387
    :cond_c
    :try_start_a
    invoke-virtual {v7}, Ljava/io/RandomAccessFile;->close()V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_4

    goto :goto_6

    :catch_4
    move-exception v0

    move-object v2, v0

    .line 390
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 394
    :goto_6
    :try_start_b
    invoke-virtual {v8}, Ljava/io/RandomAccessFile;->close()V
    :try_end_b
    .catch Ljava/io/IOException; {:try_start_b .. :try_end_b} :catch_5

    goto :goto_7

    :catch_5
    move-exception v0

    move-object v2, v0

    .line 397
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    :goto_7
    const/4 v0, 0x1

    return v0

    :catchall_0
    move-exception v0

    goto :goto_8

    :catchall_1
    move-exception v0

    move-object v8, v6

    :goto_8
    move-object v6, v7

    goto :goto_9

    :catchall_2
    move-exception v0

    move-object v8, v6

    .line 380
    :goto_9
    :try_start_c
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 381
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/tkay/china/common/a/a;->x:Ljava/lang/String;
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_3

    if-eqz v6, :cond_d

    .line 387
    :try_start_d
    invoke-virtual {v6}, Ljava/io/RandomAccessFile;->close()V
    :try_end_d
    .catch Ljava/io/IOException; {:try_start_d .. :try_end_d} :catch_6

    goto :goto_a

    :catch_6
    move-exception v0

    move-object v2, v0

    .line 390
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    :cond_d
    :goto_a
    if-eqz v8, :cond_e

    .line 394
    :try_start_e
    invoke-virtual {v8}, Ljava/io/RandomAccessFile;->close()V
    :try_end_e
    .catch Ljava/io/IOException; {:try_start_e .. :try_end_e} :catch_7

    goto :goto_b

    :catch_7
    move-exception v0

    move-object v2, v0

    .line 397
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    :cond_e
    :goto_b
    const/4 v2, 0x4

    return v2

    :catchall_3
    move-exception v0

    move-object v2, v0

    if-eqz v6, :cond_f

    .line 387
    :try_start_f
    invoke-virtual {v6}, Ljava/io/RandomAccessFile;->close()V
    :try_end_f
    .catch Ljava/io/IOException; {:try_start_f .. :try_end_f} :catch_8

    goto :goto_c

    :catch_8
    move-exception v0

    move-object v3, v0

    .line 390
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    :cond_f
    :goto_c
    if-eqz v8, :cond_10

    .line 394
    :try_start_10
    invoke-virtual {v8}, Ljava/io/RandomAccessFile;->close()V
    :try_end_10
    .catch Ljava/io/IOException; {:try_start_10 .. :try_end_10} :catch_9

    goto :goto_d

    :catch_9
    move-exception v0

    move-object v3, v0

    .line 397
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 399
    :cond_10
    :goto_d
    throw v2
.end method

.method static synthetic a(Lcom/tkay/china/common/a/a;)V
    .locals 9

    .line 1405
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/china/common/a/a;->b:Ljava/lang/String;

    invoke-static {v2}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".log"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1406
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/china/common/a/a;->b:Ljava/lang/String;

    invoke-static {v3}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".temp"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1407
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_9

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    goto/16 :goto_9

    :cond_0
    const/4 v2, 0x0

    .line 1420
    :try_start_0
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 1421
    :try_start_1
    new-instance v0, Ljava/io/InputStreamReader;

    invoke-direct {v0, v3}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1422
    :try_start_2
    new-instance v4, Ljava/io/BufferedReader;

    invoke-direct {v4, v0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 1423
    :try_start_3
    invoke-virtual {v4}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v2

    .line 1425
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 1426
    invoke-static {v2}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    iput-wide v5, p0, Lcom/tkay/china/common/a/a;->n:J

    .line 1428
    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v7

    cmp-long v2, v5, v7

    if-lez v2, :cond_1

    const-wide/16 v1, 0x0

    .line 1429
    iput-wide v1, p0, Lcom/tkay/china/common/a/a;->n:J

    goto :goto_0

    .line 1431
    :cond_1
    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/china/common/a/a;->s:J

    .line 1433
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "readLogFile: startPost -> "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v5, p0, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ", downloadSize -> "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v5, p0, Lcom/tkay/china/common/a/a;->s:J

    invoke-virtual {v1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 1441
    :cond_2
    :try_start_4
    invoke-virtual {v4}, Ljava/io/BufferedReader;->close()V

    .line 1444
    invoke-virtual {v0}, Ljava/io/InputStreamReader;->close()V

    .line 1447
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 1450
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    return-void

    :catchall_0
    move-exception p0

    move-object v2, v4

    goto :goto_5

    :catch_1
    move-exception p0

    move-object v2, v4

    goto :goto_1

    :catch_2
    move-exception p0

    goto :goto_1

    :catchall_1
    move-exception p0

    move-object v0, v2

    goto :goto_5

    :catch_3
    move-exception p0

    move-object v0, v2

    goto :goto_1

    :catchall_2
    move-exception p0

    move-object v0, v2

    move-object v3, v0

    goto :goto_5

    :catch_4
    move-exception p0

    move-object v0, v2

    move-object v3, v0

    .line 1437
    :goto_1
    :try_start_5
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    if-eqz v2, :cond_3

    .line 1441
    :try_start_6
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    goto :goto_2

    :catch_5
    move-exception p0

    goto :goto_3

    :cond_3
    :goto_2
    if-eqz v0, :cond_4

    .line 1444
    invoke-virtual {v0}, Ljava/io/InputStreamReader;->close()V

    :cond_4
    if-eqz v3, :cond_5

    .line 1447
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_4

    .line 1450
    :goto_3
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_5
    :goto_4
    return-void

    :catchall_3
    move-exception p0

    :goto_5
    if-eqz v2, :cond_6

    .line 1441
    :try_start_7
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    goto :goto_6

    :catch_6
    move-exception v0

    goto :goto_7

    :cond_6
    :goto_6
    if-eqz v0, :cond_7

    .line 1444
    invoke-virtual {v0}, Ljava/io/InputStreamReader;->close()V

    :cond_7
    if-eqz v3, :cond_8

    .line 1447
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_6

    goto :goto_8

    .line 1450
    :goto_7
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 1452
    :cond_8
    :goto_8
    throw p0

    .line 1409
    :cond_9
    :goto_9
    :try_start_8
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 1410
    invoke-virtual {v1}, Ljava/io/File;->delete()Z
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    :catchall_4
    return-void
.end method

.method static synthetic b(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/e;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/china/common/a/a;)Lcom/tkay/china/common/a/a$a;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/china/common/a/a;->v:Lcom/tkay/china/common/a/a$a;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/china/common/a/a;)Ljava/lang/String;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/china/common/a/a;->x:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f()Ljava/lang/String;
    .locals 1

    .line 34
    sget-object v0, Lcom/tkay/china/common/a/a;->u:Ljava/lang/String;

    return-object v0
.end method

.method private g()V
    .locals 2

    .line 106
    new-instance v0, Lcom/tkay/china/common/a/a$1;

    invoke-direct {v0, p0}, Lcom/tkay/china/common/a/a$1;-><init>(Lcom/tkay/china/common/a/a;)V

    .line 297
    invoke-static {}, Lcom/tkay/china/common/a/a/a;->a()Lcom/tkay/china/common/a/a/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/china/common/a/a/a;->a(Lcom/tkay/core/common/l/b/b;)V

    return-void
.end method

.method private h()V
    .locals 9

    .line 405
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/china/common/a/a;->b:Ljava/lang/String;

    invoke-static {v2}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".log"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 406
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/china/common/a/a;->b:Ljava/lang/String;

    invoke-static {v3}, Lcom/tkay/china/common/c/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".temp"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 407
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_9

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    goto/16 :goto_9

    :cond_0
    const/4 v2, 0x0

    .line 420
    :try_start_0
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 421
    :try_start_1
    new-instance v0, Ljava/io/InputStreamReader;

    invoke-direct {v0, v3}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 422
    :try_start_2
    new-instance v4, Ljava/io/BufferedReader;

    invoke-direct {v4, v0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 423
    :try_start_3
    invoke-virtual {v4}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v2

    .line 425
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 426
    invoke-static {v2}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    iput-wide v5, p0, Lcom/tkay/china/common/a/a;->n:J

    .line 428
    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v7

    cmp-long v2, v5, v7

    if-lez v2, :cond_1

    const-wide/16 v1, 0x0

    .line 429
    iput-wide v1, p0, Lcom/tkay/china/common/a/a;->n:J

    goto :goto_0

    .line 431
    :cond_1
    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/china/common/a/a;->s:J

    .line 433
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "readLogFile: startPost -> "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v5, p0, Lcom/tkay/china/common/a/a;->n:J

    invoke-virtual {v1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ", downloadSize -> "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v5, p0, Lcom/tkay/china/common/a/a;->s:J

    invoke-virtual {v1, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 441
    :cond_2
    :try_start_4
    invoke-virtual {v4}, Ljava/io/BufferedReader;->close()V

    .line 444
    invoke-virtual {v0}, Ljava/io/InputStreamReader;->close()V

    .line 447
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 450
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    return-void

    :catchall_0
    move-exception v1

    move-object v2, v4

    goto :goto_5

    :catch_1
    move-exception v1

    move-object v2, v4

    goto :goto_1

    :catch_2
    move-exception v1

    goto :goto_1

    :catchall_1
    move-exception v1

    move-object v0, v2

    goto :goto_5

    :catch_3
    move-exception v1

    move-object v0, v2

    goto :goto_1

    :catchall_2
    move-exception v1

    move-object v0, v2

    move-object v3, v0

    goto :goto_5

    :catch_4
    move-exception v1

    move-object v0, v2

    move-object v3, v0

    .line 437
    :goto_1
    :try_start_5
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    if-eqz v2, :cond_3

    .line 441
    :try_start_6
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    goto :goto_2

    :catch_5
    move-exception v0

    goto :goto_3

    :cond_3
    :goto_2
    if-eqz v0, :cond_4

    .line 444
    invoke-virtual {v0}, Ljava/io/InputStreamReader;->close()V

    :cond_4
    if-eqz v3, :cond_5

    .line 447
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_4

    .line 450
    :goto_3
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :cond_5
    :goto_4
    return-void

    :catchall_3
    move-exception v1

    :goto_5
    if-eqz v2, :cond_6

    .line 441
    :try_start_7
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    goto :goto_6

    :catch_6
    move-exception v0

    goto :goto_7

    :cond_6
    :goto_6
    if-eqz v0, :cond_7

    .line 444
    invoke-virtual {v0}, Ljava/io/InputStreamReader;->close()V

    :cond_7
    if-eqz v3, :cond_8

    .line 447
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_6

    goto :goto_8

    .line 450
    :goto_7
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 452
    :cond_8
    :goto_8
    throw v1

    .line 409
    :cond_9
    :goto_9
    :try_start_8
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 410
    invoke-virtual {v1}, Ljava/io/File;->delete()Z
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    :catchall_4
    return-void
.end method

.method private static i()I
    .locals 1

    const v0, 0xea60

    return v0
.end method

.method private static j()I
    .locals 1

    const/16 v0, 0x4e20

    return v0
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x1

    .line 88
    iput-boolean v0, p0, Lcom/tkay/china/common/a/a;->c:Z

    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/a$a;)V
    .locals 1

    .line 81
    iput-object p1, p0, Lcom/tkay/china/common/a/a;->v:Lcom/tkay/china/common/a/a$a;

    const/4 p1, 0x0

    .line 82
    iput-boolean p1, p0, Lcom/tkay/china/common/a/a;->c:Z

    .line 1106
    new-instance p1, Lcom/tkay/china/common/a/a$1;

    invoke-direct {p1, p0}, Lcom/tkay/china/common/a/a$1;-><init>(Lcom/tkay/china/common/a/a;)V

    .line 1297
    invoke-static {}, Lcom/tkay/china/common/a/a/a;->a()Lcom/tkay/china/common/a/a/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/china/common/a/a/a;->a(Lcom/tkay/core/common/l/b/b;)V

    return-void
.end method

.method protected final a(Lcom/tkay/china/common/a/b;)V
    .locals 2

    .line 475
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "url: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 476
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/b;)V

    return-void
.end method

.method protected final a(Lorg/apache/http/conn/ConnectTimeoutException;)V
    .locals 1

    .line 471
    invoke-virtual {p1}, Lorg/apache/http/conn/ConnectTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "10000"

    invoke-static {v0, p1}, Lcom/tkay/china/common/a/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/china/common/a/b;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a/a;->b(Lcom/tkay/china/common/a/b;)V

    return-void
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x1

    .line 92
    iput-boolean v0, p0, Lcom/tkay/china/common/a/a;->d:Z

    return-void
.end method

.method protected final b(Lcom/tkay/china/common/a/b;)V
    .locals 2

    .line 495
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "download failed --> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/b;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 497
    iget-object v0, p0, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0}, Lcom/tkay/china/common/a/e;->n()V

    .line 498
    iget-object v0, p0, Lcom/tkay/china/common/a/a;->v:Lcom/tkay/china/common/a/a$a;

    if-eqz v0, :cond_0

    .line 499
    iget-object v1, p0, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    invoke-virtual {p1}, Lcom/tkay/china/common/a/b;->b()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected c()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected final d()V
    .locals 9

    .line 480
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "url: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 481
    iget-object v2, p0, Lcom/tkay/china/common/a/a;->v:Lcom/tkay/china/common/a/a$a;

    if-eqz v2, :cond_0

    .line 482
    iget-object v3, p0, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    iget-wide v4, p0, Lcom/tkay/china/common/a/a;->t:J

    iget-wide v6, p0, Lcom/tkay/china/common/a/a;->s:J

    iget v8, p0, Lcom/tkay/china/common/a/a;->m:I

    invoke-interface/range {v2 .. v8}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;JJI)V

    :cond_0
    return-void
.end method

.method protected final e()V
    .locals 4

    .line 487
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "url: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/china/common/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 489
    iget-object v0, p0, Lcom/tkay/china/common/a/a;->v:Lcom/tkay/china/common/a/a$a;

    if-eqz v0, :cond_0

    .line 490
    iget-object v1, p0, Lcom/tkay/china/common/a/a;->w:Lcom/tkay/china/common/a/e;

    iget-wide v2, v1, Lcom/tkay/china/common/a/e;->i:J

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/china/common/a/a$a;->a(Lcom/tkay/china/common/a/e;J)V

    :cond_0
    return-void
.end method
