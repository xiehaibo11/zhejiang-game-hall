.class public final Lcom/bytedance/pangle/e/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/pangle/e/f$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bytedance/pangle/e/e$a;,
        Lcom/bytedance/pangle/e/e$b;
    }
.end annotation


# static fields
.field private static volatile a:Landroid/os/IBinder;

.field private static volatile b:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Object;",
            "[",
            "Ljava/lang/Class<",
            "*>;)",
            "Ljava/lang/Object;"
        }
    .end annotation

    .line 327
    :try_start_0
    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static a(Ljava/lang/reflect/Field;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    .line 314
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/reflect/Field;->isAccessible()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 315
    invoke-virtual {p0, v0}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 317
    :cond_0
    invoke-virtual {p0, p1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    const/4 v0, 0x0

    .line 318
    invoke-virtual {p0, v0}, Ljava/lang/reflect/Field;->setAccessible(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static a([Ljava/lang/String;)V
    .locals 4

    .line 182
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 183
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    .line 184
    sget-object v2, Ljava/io/FileDescriptor;->in:Ljava/io/FileDescriptor;

    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeFileDescriptor(Ljava/io/FileDescriptor;)V

    .line 185
    sget-object v2, Ljava/io/FileDescriptor;->out:Ljava/io/FileDescriptor;

    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeFileDescriptor(Ljava/io/FileDescriptor;)V

    .line 186
    sget-object v2, Ljava/io/FileDescriptor;->err:Ljava/io/FileDescriptor;

    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeFileDescriptor(Ljava/io/FileDescriptor;)V

    .line 187
    invoke-virtual {v0, p0}, Landroid/os/Parcel;->writeStringArray([Ljava/lang/String;)V

    const/4 p0, 0x0

    .line 188
    invoke-virtual {v0, p0}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 190
    new-instance p0, Lcom/bytedance/pangle/e/e$b;

    invoke-direct {p0}, Lcom/bytedance/pangle/e/e$b;-><init>()V

    const/4 v2, 0x0

    .line 191
    invoke-virtual {p0, v0, v2}, Landroid/os/ResultReceiver;->writeToParcel(Landroid/os/Parcel;I)V

    .line 194
    :try_start_0
    sget-object p0, Lcom/bytedance/pangle/e/e;->a:Landroid/os/IBinder;

    const v3, 0x5f434d44

    invoke-interface {p0, v3, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 195
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 199
    :catch_0
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 200
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p0

    .line 199
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 200
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 201
    throw p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;I)Z
    .locals 12

    .line 1056
    sget-object v0, Lcom/bytedance/pangle/e/e;->a:Landroid/os/IBinder;

    if-nez v0, :cond_1

    .line 1060
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    .line 1305
    :cond_0
    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    const-string v2, "mPM"

    .line 1309
    invoke-static {v1, v2}, Lcom/bytedance/pangle/util/FieldUtils;->getField(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    :goto_0
    if-eqz v1, :cond_1

    .line 1067
    invoke-static {v1, v0}, Lcom/bytedance/pangle/e/e;->a(Ljava/lang/reflect/Field;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    .line 1068
    sput-object v0, Lcom/bytedance/pangle/e/e;->b:Ljava/lang/Object;

    instance-of v0, v0, Landroid/os/IInterface;

    if-eqz v0, :cond_1

    .line 1072
    sget-object v0, Lcom/bytedance/pangle/e/e;->b:Ljava/lang/Object;

    check-cast v0, Landroid/os/IInterface;

    .line 1073
    invoke-interface {v0}, Landroid/os/IInterface;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1075
    sput-object v0, Lcom/bytedance/pangle/e/e;->a:Landroid/os/IBinder;

    :cond_1
    const/4 v0, 0x4

    const/4 v1, 0x2

    const/4 v2, 0x3

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz p1, :cond_5

    .line 2104
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v5

    .line 2105
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->e(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v6

    .line 2236
    :try_start_0
    invoke-static {v5, v6}, Lcom/bytedance/pangle/util/h;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2108
    :catch_0
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v5

    invoke-virtual {v5}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v5

    .line 2109
    invoke-static {}, Lcom/bytedance/pangle/e/b;->a()Ljava/lang/String;

    move-result-object v7

    .line 3117
    sget v8, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v9, 0x1e

    const-string v10, "notifyDexLoad"

    if-ne v8, v9, :cond_3

    .line 3130
    sget-object v8, Lcom/bytedance/pangle/e/e;->b:Ljava/lang/Object;

    if-eqz v8, :cond_5

    if-eqz v5, :cond_5

    if-eqz v6, :cond_5

    if-nez v7, :cond_2

    goto :goto_1

    :cond_2
    const-string v8, "PCL[]"

    .line 3133
    invoke-static {v6, v8}, Ljava/util/Collections;->singletonMap(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;

    move-result-object v6

    .line 3134
    sget-object v8, Lcom/bytedance/pangle/e/e;->b:Ljava/lang/Object;

    new-array v9, v2, [Ljava/lang/Object;

    aput-object v5, v9, v3

    aput-object v6, v9, v4

    aput-object v7, v9, v1

    new-array v5, v2, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v3

    const-class v6, Ljava/util/Map;

    aput-object v6, v5, v4

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v1

    invoke-static {v8, v10, v9, v5}, Lcom/bytedance/pangle/e/e;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    goto :goto_1

    .line 3120
    :cond_3
    sget v8, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v9, 0x1d

    if-ne v8, v9, :cond_5

    .line 3143
    sget-object v8, Lcom/bytedance/pangle/e/e;->b:Ljava/lang/Object;

    if-eqz v8, :cond_5

    if-eqz v5, :cond_5

    if-eqz v6, :cond_5

    if-nez v7, :cond_4

    goto :goto_1

    :cond_4
    const-string v8, "dalvik.system.DexClassLoader"

    .line 3146
    invoke-static {v8}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v8

    .line 3147
    invoke-static {v6}, Ljava/util/Collections;->singletonList(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v6

    .line 3148
    sget-object v9, Lcom/bytedance/pangle/e/e;->b:Ljava/lang/Object;

    new-array v11, v0, [Ljava/lang/Object;

    aput-object v5, v11, v3

    aput-object v8, v11, v4

    aput-object v6, v11, v1

    aput-object v7, v11, v2

    new-array v5, v0, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v3

    const-class v6, Ljava/util/List;

    aput-object v6, v5, v4

    const-class v6, Ljava/util/List;

    aput-object v6, v5, v1

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    invoke-static {v9, v10, v11, v5}, Lcom/bytedance/pangle/e/e;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    .line 4083
    :cond_5
    :goto_1
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->e(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v5

    .line 4084
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->h(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v6

    .line 4085
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v6, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Lcom/bytedance/pangle/e/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    move v6, v4

    :goto_2
    if-gt v6, v2, :cond_7

    const/4 v7, 0x6

    new-array v7, v7, [Ljava/lang/String;

    const-string v8, "compile"

    aput-object v8, v7, v3

    const-string v8, "-m"

    aput-object v8, v7, v4

    const-string v8, "speed"

    aput-object v8, v7, v1

    const-string v8, "-f"

    aput-object v8, v7, v2

    const-string v8, "--secondary-dex"

    aput-object v8, v7, v0

    const/4 v8, 0x5

    .line 4212
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v9

    invoke-virtual {v9}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v9

    aput-object v9, v7, v8

    .line 4088
    invoke-static {v7}, Lcom/bytedance/pangle/e/e;->a([Ljava/lang/String;)V

    new-array v7, v4, [Ljava/lang/String;

    aput-object v5, v7, v3

    .line 4089
    invoke-static {v7}, Lcom/bytedance/pangle/e/b;->a([Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_6

    move v0, v4

    goto :goto_3

    :cond_6
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    :cond_7
    move v0, v3

    :goto_3
    if-eqz p1, :cond_9

    .line 5161
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->f(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v2

    .line 5162
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->g(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v5

    .line 5247
    :try_start_1
    invoke-static {v5, v2}, Lcom/bytedance/pangle/util/g;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 5165
    :catch_1
    invoke-static {p1, p2}, Lcom/bytedance/pangle/d/c;->e(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p1

    .line 5258
    :try_start_2
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 5259
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 5260
    invoke-virtual {p2}, Ljava/io/File;->delete()Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :cond_8
    new-array p1, v1, [Ljava/lang/String;

    const-string p2, "reconcile-secondary-dex-files"

    aput-object p2, p1, v3

    .line 6221
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object p2

    invoke-virtual {p2}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object p2

    aput-object p2, p1, v4

    .line 6175
    invoke-static {p1}, Lcom/bytedance/pangle/e/e;->a([Ljava/lang/String;)V

    :cond_9
    return v0
.end method
