.class final Lcom/bytedance/pangle/g/l;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/pangle/g/k;


# static fields
.field private static final a:J


# instance fields
.field private final b:Ljava/io/FileDescriptor;

.field private final c:J

.field private final d:J


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 42
    sget v0, Landroid/system/OsConstants;->_SC_PAGESIZE:I

    invoke-static {v0}, Landroid/system/Os;->sysconf(I)J

    move-result-wide v0

    sput-wide v0, Lcom/bytedance/pangle/g/l;->a:J

    return-void
.end method

.method constructor <init>(Ljava/io/FileDescriptor;JJ)V
    .locals 0

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 55
    iput-object p1, p0, Lcom/bytedance/pangle/g/l;->b:Ljava/io/FileDescriptor;

    .line 56
    iput-wide p2, p0, Lcom/bytedance/pangle/g/l;->c:J

    .line 57
    iput-wide p4, p0, Lcom/bytedance/pangle/g/l;->d:J

    return-void
.end method


# virtual methods
.method public final a()J
    .locals 2

    .line 62
    iget-wide v0, p0, Lcom/bytedance/pangle/g/l;->d:J

    return-wide v0
.end method

.method public final a(Lcom/bytedance/pangle/g/j;JI)V
    .locals 18

    move-object/from16 v1, p0

    .line 80
    iget-wide v2, v1, Lcom/bytedance/pangle/g/l;->c:J

    add-long v2, v2, p2

    .line 81
    sget-wide v4, Lcom/bytedance/pangle/g/l;->a:J

    div-long v6, v2, v4

    mul-long v15, v6, v4

    sub-long/2addr v2, v15

    long-to-int v2, v2

    add-int v0, p4, v2

    int-to-long v3, v0

    const-wide/16 v5, 0x0

    .line 88
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/util/i;->g()Z

    move-result v0
    :try_end_0
    .catch Landroid/system/ErrnoException; {:try_start_0 .. :try_end_0} :catch_e
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v7, 0x0

    const/16 v17, 0x0

    if-eqz v0, :cond_0

    .line 90
    :try_start_1
    const-class v0, Landroid/system/OsConstants;

    const-string v8, "MAP_POPULATE"

    invoke-static {v0, v8}, Lcom/bytedance/pangle/b/a/a;->a(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    .line 91
    invoke-static {v0, v7}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/reflect/Field;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_1
    .catch Ljava/lang/IllegalAccessException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catch Landroid/system/ErrnoException; {:try_start_1 .. :try_end_1} :catch_e
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 95
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 93
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    :cond_0
    :goto_0
    move/from16 v0, v17

    :goto_1
    const-wide/16 v8, 0x0

    .line 98
    sget v12, Landroid/system/OsConstants;->PROT_READ:I

    sget v10, Landroid/system/OsConstants;->MAP_SHARED:I

    or-int v13, v10, v0

    iget-object v14, v1, Lcom/bytedance/pangle/g/l;->b:Ljava/io/FileDescriptor;

    move-wide v10, v3

    invoke-static/range {v8 .. v16}, Landroid/system/Os;->mmap(JJIILjava/io/FileDescriptor;J)J

    move-result-wide v8
    :try_end_2
    .catch Landroid/system/ErrnoException; {:try_start_2 .. :try_end_2} :catch_e
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1224
    :try_start_3
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v10, 0x18

    const/4 v11, 0x1

    if-lt v0, v10, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_3
    .catch Landroid/system/ErrnoException; {:try_start_3 .. :try_end_3} :catch_d
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    const/16 v10, 0x1c

    if-gt v0, v10, :cond_1

    move v0, v11

    goto :goto_2

    :cond_1
    move/from16 v0, v17

    :goto_2
    const-string v10, "java.nio.DirectByteBuffer"

    const/4 v12, 0x2

    if-eqz v0, :cond_2

    .line 117
    :try_start_4
    invoke-static {v10}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const/4 v10, 0x5

    new-array v13, v10, [Ljava/lang/Class;

    .line 118
    sget-object v14, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v14, v13, v17

    sget-object v14, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    aput-object v14, v13, v11

    const-class v14, Ljava/io/FileDescriptor;

    aput-object v14, v13, v12

    const-class v14, Ljava/lang/Runnable;

    const/4 v15, 0x3

    aput-object v14, v13, v15

    sget-object v14, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    const/16 v16, 0x4

    aput-object v14, v13, v16

    .line 119
    invoke-static {v0, v13}, Lcom/bytedance/pangle/b/a/a;->a(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 120
    invoke-virtual {v0}, Ljava/lang/reflect/Constructor;->isAccessible()Z

    move-result v13

    if-eqz v13, :cond_3

    new-array v10, v10, [Ljava/lang/Object;

    .line 121
    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v13

    aput-object v13, v10, v17

    int-to-long v13, v2

    add-long/2addr v13, v8

    invoke-static {v13, v14}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v10, v11

    iget-object v2, v1, Lcom/bytedance/pangle/g/l;->b:Ljava/io/FileDescriptor;

    aput-object v2, v10, v12

    aput-object v7, v10, v15

    sget-object v2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    aput-object v2, v10, v16

    invoke-virtual {v0, v10}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/nio/ByteBuffer;
    :try_end_4
    .catch Ljava/lang/ClassNotFoundException; {:try_start_4 .. :try_end_4} :catch_6
    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Ljava/lang/InstantiationException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_4 .. :try_end_4} :catch_3
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2
    .catch Landroid/system/ErrnoException; {:try_start_4 .. :try_end_4} :catch_d
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :goto_3
    move-object v7, v0

    goto/16 :goto_e

    :catch_2
    move-exception v0

    goto :goto_4

    :catch_3
    move-exception v0

    goto :goto_5

    :catch_4
    move-exception v0

    goto :goto_6

    :catch_5
    move-exception v0

    goto :goto_7

    :catch_6
    move-exception v0

    goto :goto_8

    .line 132
    :goto_4
    :try_start_5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_e

    .line 130
    :goto_5
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_e

    .line 128
    :goto_6
    invoke-virtual {v0}, Ljava/lang/InstantiationException;->printStackTrace()V

    goto :goto_e

    .line 126
    :goto_7
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_e

    .line 124
    :goto_8
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V
    :try_end_5
    .catch Landroid/system/ErrnoException; {:try_start_5 .. :try_end_5} :catch_d
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_e

    .line 136
    :cond_2
    :try_start_6
    invoke-static {v10}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    new-array v10, v12, [Ljava/lang/Class;

    .line 137
    sget-object v13, Ljava/lang/Long;->TYPE:Ljava/lang/Class;

    aput-object v13, v10, v17

    sget-object v13, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v13, v10, v11

    .line 138
    invoke-static {v0, v10}, Lcom/bytedance/pangle/b/a/a;->a(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 139
    invoke-virtual {v0}, Ljava/lang/reflect/Constructor;->isAccessible()Z

    move-result v10

    if-eqz v10, :cond_3

    new-array v10, v12, [Ljava/lang/Object;

    int-to-long v12, v2

    add-long/2addr v12, v8

    .line 140
    invoke-static {v12, v13}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    aput-object v2, v10, v17

    invoke-static/range {p4 .. p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v10, v11

    invoke-virtual {v0, v10}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/nio/ByteBuffer;
    :try_end_6
    .catch Ljava/lang/ClassNotFoundException; {:try_start_6 .. :try_end_6} :catch_b
    .catch Ljava/lang/IllegalAccessException; {:try_start_6 .. :try_end_6} :catch_a
    .catch Ljava/lang/InstantiationException; {:try_start_6 .. :try_end_6} :catch_9
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_6 .. :try_end_6} :catch_8
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_7
    .catch Landroid/system/ErrnoException; {:try_start_6 .. :try_end_6} :catch_d
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    goto :goto_3

    :catch_7
    move-exception v0

    goto :goto_9

    :catch_8
    move-exception v0

    goto :goto_a

    :catch_9
    move-exception v0

    goto :goto_b

    :catch_a
    move-exception v0

    goto :goto_c

    :catch_b
    move-exception v0

    goto :goto_d

    .line 151
    :goto_9
    :try_start_7
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_e

    .line 149
    :goto_a
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_e

    .line 147
    :goto_b
    invoke-virtual {v0}, Ljava/lang/InstantiationException;->printStackTrace()V

    goto :goto_e

    .line 145
    :goto_c
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_e

    .line 143
    :goto_d
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_3
    :goto_e
    move-object/from16 v2, p1

    .line 154
    invoke-interface {v2, v7}, Lcom/bytedance/pangle/g/j;->a(Ljava/nio/ByteBuffer;)V
    :try_end_7
    .catch Landroid/system/ErrnoException; {:try_start_7 .. :try_end_7} :catch_d
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    cmp-long v0, v8, v5

    if-eqz v0, :cond_4

    .line 160
    :try_start_8
    invoke-static {v8, v9, v3, v4}, Landroid/system/Os;->munmap(JJ)V
    :try_end_8
    .catch Landroid/system/ErrnoException; {:try_start_8 .. :try_end_8} :catch_c

    :catch_c
    :cond_4
    return-void

    :catch_d
    move-exception v0

    goto :goto_f

    :catchall_0
    move-exception v0

    move-wide v8, v5

    goto :goto_10

    :catch_e
    move-exception v0

    move-wide v8, v5

    .line 156
    :goto_f
    :try_start_9
    new-instance v2, Ljava/io/IOException;

    new-instance v7, Ljava/lang/StringBuilder;

    const-string v10, "Failed to mmap "

    invoke-direct {v7, v10}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v10, " bytes"

    invoke-virtual {v7, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v2, v7, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_1

    :catchall_1
    move-exception v0

    :goto_10
    cmp-long v2, v8, v5

    if-eqz v2, :cond_5

    .line 160
    :try_start_a
    invoke-static {v8, v9, v3, v4}, Landroid/system/Os;->munmap(JJ)V
    :try_end_a
    .catch Landroid/system/ErrnoException; {:try_start_a .. :try_end_a} :catch_f

    .line 163
    :catch_f
    :cond_5
    throw v0
.end method
