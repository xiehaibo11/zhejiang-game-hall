.class public Lcom/qihoo360/replugin/PluginDexClassLoader;
.super Ldalvik/system/DexClassLoader;
.source "PluginDexClassLoader.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "PluginDexClassLoader"

.field private static sLoadClassMethod:Ljava/lang/reflect/Method;


# instance fields
.field private final mHostClassLoader:Ljava/lang/ClassLoader;

.field private mPluginName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V
    .locals 0

    .line 73
    invoke-direct {p0, p2, p3, p4, p5}, Ldalvik/system/DexClassLoader;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V

    .line 75
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/qihoo360/replugin/PluginDexClassLoader;->mPluginName:Ljava/lang/String;

    .line 77
    invoke-direct {p0, p1, p2, p5}, Lcom/qihoo360/replugin/PluginDexClassLoader;->installMultiDexesBeforeLollipop(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;Ljava/lang/ClassLoader;)V

    .line 79
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppClassLoader()Ljava/lang/ClassLoader;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/replugin/PluginDexClassLoader;->mHostClassLoader:Ljava/lang/ClassLoader;

    .line 81
    invoke-static {p1}, Lcom/qihoo360/replugin/PluginDexClassLoader;->initMethods(Ljava/lang/ClassLoader;)V

    return-void
.end method

.method private combineArray(Ljava/util/List;)Ljava/lang/Object;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "[",
            "Ljava/lang/Object;",
            ">;)",
            "Ljava/lang/Object;"
        }
    .end annotation

    .line 246
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    move v3, v1

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/Object;

    if-nez v2, :cond_0

    move-object v2, v4

    .line 252
    :cond_0
    array-length v4, v4

    add-int/2addr v3, v4

    goto :goto_0

    .line 256
    :cond_1
    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getComponentType()Ljava/lang/Class;

    move-result-object v0

    .line 255
    invoke-static {v0, v3}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/Object;

    check-cast v0, [Ljava/lang/Object;

    .line 258
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    move v2, v1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [Ljava/lang/Object;

    .line 260
    array-length v4, v3

    invoke-static {v3, v1, v0, v2, v4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 261
    array-length v3, v3

    add-int/2addr v2, v3

    goto :goto_1

    :cond_2
    return-object v0
.end method

.method private static extractFile(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;Ljava/io/File;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 351
    :try_start_0
    invoke-virtual {p0, p1}, Ljava/util/zip/ZipFile;->getInputStream(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 352
    :try_start_1
    invoke-static {p0, p2}, Lcom/qihoo360/replugin/utils/FileUtils;->copyInputStreamToFile(Ljava/io/InputStream;Ljava/io/File;)V

    .line 353
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "PluginDexClassLoader"

    .line 354
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "extractFile(): Success! fn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 357
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-void

    :catchall_0
    move-exception p1

    goto :goto_0

    :catchall_1
    move-exception p1

    const/4 p0, 0x0

    :goto_0
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
.end method

.method private getExtraDexFiles(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/io/File;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 282
    :try_start_0
    new-instance v1, Ljava/util/zip/ZipFile;

    invoke-direct {v1, p2}, Ljava/util/zip/ZipFile;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 283
    :try_start_1
    invoke-static {p1, v1}, Lcom/qihoo360/replugin/PluginDexClassLoader;->traverseExtraDex(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/util/zip/ZipFile;)Ljava/util/List;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    move-object v0, v1

    goto :goto_2

    :catch_0
    move-exception p1

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_1
    move-exception p1

    move-object v1, v0

    .line 287
    :goto_0
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 289
    invoke-static {v1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/util/zip/ZipFile;)V

    goto :goto_3

    :catchall_1
    move-exception p1

    move-object v0, v1

    :goto_1
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/util/zip/ZipFile;)V

    throw p1

    :cond_0
    move-object p1, v0

    :goto_2
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/util/zip/ZipFile;)V

    move-object v0, p1

    :goto_3
    return-object v0
.end method

.method private static initMethods(Ljava/lang/ClassLoader;)V
    .locals 3

    .line 85
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    .line 86
    sget-object v0, Lcom/qihoo360/replugin/PluginDexClassLoader;->sLoadClassMethod:Ljava/lang/reflect/Method;

    if-nez v0, :cond_1

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Class;

    const/4 v1, 0x0

    .line 87
    const-class v2, Ljava/lang/String;

    aput-object v2, v0, v1

    const/4 v1, 0x1

    sget-object v2, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v2, v0, v1

    const-string v1, "loadClass"

    invoke-static {p0, v1, v0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    sput-object p0, Lcom/qihoo360/replugin/PluginDexClassLoader;->sLoadClassMethod:Ljava/lang/reflect/Method;

    if-eqz p0, :cond_0

    goto :goto_0

    .line 89
    :cond_0
    new-instance p0, Ljava/lang/NoSuchMethodError;

    invoke-direct {p0, v1}, Ljava/lang/NoSuchMethodError;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_1
    :goto_0
    return-void
.end method

.method private installMultiDexesBeforeLollipop(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;Ljava/lang/ClassLoader;)V
    .locals 10

    const-string v0, "pathList"

    const-string v1, "dexElements"

    .line 176
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x15

    if-lt v2, v3, :cond_0

    return-void

    .line 183
    :cond_0
    :try_start_0
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/PluginDexClassLoader;->getExtraDexFiles(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;)Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_3

    .line 185
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    .line 187
    new-instance v2, Ljava/util/LinkedList;

    invoke-direct {v2}, Ljava/util/LinkedList;-><init>()V

    const-string v3, "dalvik.system.BaseDexClassLoader"

    .line 190
    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    .line 191
    invoke-static {v3, p0, v0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    .line 192
    invoke-virtual {v4}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-static {v5, v4, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/Object;

    check-cast v5, [Ljava/lang/Object;

    .line 193
    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 196
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraOdexDir()Ljava/io/File;

    move-result-object v5

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    .line 198
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v7, "PluginDexClassLoader"

    if-eqz v6, :cond_2

    :try_start_1
    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/io/File;

    .line 199
    sget-boolean v8, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v8, :cond_1

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v8

    invoke-virtual {v8}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v8

    if-eqz v8, :cond_1

    .line 200
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "dex file:"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 203
    :cond_1
    new-instance v7, Ldalvik/system/DexClassLoader;

    invoke-virtual {v6}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v7, v6, v5, v5, p3}, Ldalvik/system/DexClassLoader;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V

    .line 205
    invoke-static {v3, v7, v0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v6

    .line 206
    invoke-virtual {v6}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v7

    invoke-static {v7, v6, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, [Ljava/lang/Object;

    check-cast v6, [Ljava/lang/Object;

    .line 207
    invoke-interface {v2, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 211
    :cond_2
    invoke-direct {p0, v2}, Lcom/qihoo360/replugin/PluginDexClassLoader;->combineArray(Ljava/util/List;)Ljava/lang/Object;

    move-result-object p2

    .line 214
    invoke-virtual {v4}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p3

    invoke-static {p3, v4, v1, p2}, Lcom/qihoo360/replugin/utils/ReflectUtils;->writeField(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    .line 217
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraDexDir()Ljava/io/File;

    move-result-object p1

    invoke-static {p1}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 220
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_3

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result p1

    if-eqz p1, :cond_3

    .line 222
    invoke-virtual {v4}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-static {p1, v4, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    .line 223
    invoke-static {p1}, Ljava/lang/reflect/Array;->getLength(Ljava/lang/Object;)I

    move-result p1

    .line 224
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "dexElements length:"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v7, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 229
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_1
    return-void
.end method

.method private loadClassFromHost(Ljava/lang/String;Z)Ljava/lang/Class;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/ClassNotFoundException;
        }
    .end annotation

    .line 151
    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/PluginDexClassLoader;->sLoadClassMethod:Ljava/lang/reflect/Method;

    iget-object v1, p0, Lcom/qihoo360/replugin/PluginDexClassLoader;->mHostClassLoader:Ljava/lang/ClassLoader;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 v3, 0x1

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    aput-object p2, v2, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Class;

    .line 153
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "PluginDexClassLoader"

    .line 154
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "loadClass: load host class, cn="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ", cz="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-object p2

    :catch_0
    move-exception p1

    .line 161
    new-instance p2, Ljava/lang/ClassNotFoundException;

    const-string v0, "Calling the loadClass method failed (InvocationTargetException)"

    invoke-direct {p2, v0, p1}, Ljava/lang/ClassNotFoundException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw p2

    :catch_1
    move-exception p1

    .line 158
    new-instance p2, Ljava/lang/ClassNotFoundException;

    const-string v0, "Calling the loadClass method failed (IllegalAccessException)"

    invoke-direct {p2, v0, p1}, Ljava/lang/ClassNotFoundException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw p2
.end method

.method private static traverseExtraDex(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/util/zip/ZipFile;)Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            "Ljava/util/zip/ZipFile;",
            ")",
            "Ljava/util/List<",
            "Ljava/io/File;",
            ">;"
        }
    .end annotation

    .line 306
    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    .line 307
    invoke-virtual {p1}, Ljava/util/zip/ZipFile;->entries()Ljava/util/Enumeration;

    move-result-object v1

    const/4 v2, 0x0

    .line 308
    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 309
    invoke-interface {v1}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/zip/ZipEntry;

    .line 310
    invoke-virtual {v3}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v4

    const-string v5, "../"

    .line 311
    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_1

    goto :goto_0

    :cond_1
    :try_start_0
    const-string v5, ".dex"

    .line 317
    invoke-virtual {v4, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    const-string v5, "classes.dex"

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_0

    if-nez v2, :cond_2

    .line 320
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getExtraDexDir()Ljava/io/File;

    move-result-object v5

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    .line 323
    :cond_2
    new-instance v5, Ljava/io/File;

    invoke-direct {v5, v2, v4}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 324
    invoke-static {p1, v3, v5}, Lcom/qihoo360/replugin/PluginDexClassLoader;->extractFile(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;Ljava/io/File;)V

    .line 325
    invoke-interface {v0, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 327
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_0

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v3

    invoke-virtual {v3}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v3

    if-eqz v3, :cond_0

    const-string v3, "PluginDexClassLoader"

    .line 328
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "dex path:"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 332
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_3
    return-object v0
.end method


# virtual methods
.method protected loadClass(Ljava/lang/String;Z)Ljava/lang/Class;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/ClassNotFoundException;
        }
    .end annotation

    const-string v0, "PluginDexClassLoader"

    const/4 v1, 0x0

    .line 100
    :try_start_0
    invoke-super {p0, p1, p2}, Ldalvik/system/DexClassLoader;->loadClass(Ljava/lang/String;Z)Ljava/lang/Class;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 103
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_0

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v3

    invoke-virtual {v3}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 104
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "loadClass: load plugin class, cn="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-object v2

    :cond_1
    move-object v2, v1

    goto :goto_0

    :catch_0
    move-exception v2

    .line 112
    invoke-static {p1}, Lcom/qihoo360/replugin/PluginDexClassLoaderPatch;->need2LoadFromHost(Ljava/lang/String;)Z

    move-result v3

    const-string v4, ", pluginName="

    if-eqz v3, :cond_2

    .line 114
    :try_start_1
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/PluginDexClassLoader;->loadClassFromHost(Ljava/lang/String;Z)Ljava/lang/Class;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_1

    return-object p1

    :catch_1
    move-exception v2

    .line 119
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_3

    .line 120
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "loadClass ClassNotFoundException, from HostClassLoader&&PluginClassLoader, cn="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/qihoo360/replugin/PluginDexClassLoader;->mPluginName:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 124
    :cond_2
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_3

    .line 125
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "loadClass ClassNotFoundException, from PluginClassLoader, cn="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/qihoo360/replugin/PluginDexClassLoader;->mPluginName:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 132
    :cond_3
    :goto_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isUseHostClassIfNotFound()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 134
    :try_start_2
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/PluginDexClassLoader;->loadClassFromHost(Ljava/lang/String;Z)Ljava/lang/Class;

    move-result-object p1
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_2

    return-object p1

    :catch_2
    move-exception v2

    :cond_4
    if-nez v2, :cond_5

    return-object v1

    .line 143
    :cond_5
    throw v2
.end method
