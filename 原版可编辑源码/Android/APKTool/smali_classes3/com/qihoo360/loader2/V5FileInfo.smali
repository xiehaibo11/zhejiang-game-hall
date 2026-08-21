.class public Lcom/qihoo360/loader2/V5FileInfo;
.super Ljava/lang/Object;
.source "V5FileInfo.java"


# static fields
.field private static final EXTENSION:Ljava/lang/String; = ".jar"

.field public static final INCREMENT_PLUGIN:I = 0x3

.field private static final INCREMENT_PLUGIN_FILE_PATTERN:Ljava/lang/String; = "^v-plugin-([^.-]+).jar$"

.field private static final INCREMENT_REGEX:Ljava/util/regex/Pattern;

.field private static final INCREMENT_SINGLE_REGEX:Ljava/util/regex/Pattern;

.field public static final MULTI_PLUGIN:I = 0x4

.field private static final MULTI_PLUGIN_FILE_PATTERN:Ljava/lang/String; = "^p-m-([^.-]+).jar$"

.field private static final MULTI_REGEX:Ljava/util/regex/Pattern;

.field public static final NONE_PLUGIN:I = 0x0

.field public static final NORMAL_PLUGIN:I = 0x1

.field private static final NORMAL_PLUGIN_FILE_PATTERN:Ljava/lang/String; = "^p-n-([^.-]+).jar$"

.field private static final NORMAL_PREFIX:Ljava/lang/String; = "p-n-"

.field private static final NORMAL_REGEX:Ljava/util/regex/Pattern;

.field public static final SINGLE_PLUGIN:I = 0x2

.field private static final SINGLE_PLUGIN_FILE_PATTERN:Ljava/lang/String; = "^plugin-s-([^.-]+).jar$"

.field private static final V5_FILE_HEADER_SIZE:I = 0x10


# instance fields
.field mFile:Ljava/io/File;

.field mName:Ljava/lang/String;

.field mType:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "^v-plugin-([^.-]+).jar$"

    .line 131
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/V5FileInfo;->INCREMENT_REGEX:Ljava/util/regex/Pattern;

    const-string v0, "^plugin-s-([^.-]+).jar$"

    .line 132
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/V5FileInfo;->INCREMENT_SINGLE_REGEX:Ljava/util/regex/Pattern;

    const-string v0, "^p-n-([^.-]+).jar$"

    .line 133
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/V5FileInfo;->NORMAL_REGEX:Ljava/util/regex/Pattern;

    const-string v0, "^p-m-([^.-]+).jar$"

    .line 134
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/V5FileInfo;->MULTI_REGEX:Ljava/util/regex/Pattern;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static final build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;
    .locals 4

    .line 150
    invoke-virtual {p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x3

    if-ne p1, v1, :cond_0

    .line 152
    sget-object v1, Lcom/qihoo360/loader2/V5FileInfo;->INCREMENT_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {v1, v0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    .line 154
    sget-object v1, Lcom/qihoo360/loader2/V5FileInfo;->INCREMENT_SINGLE_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {v1, v0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    goto :goto_0

    :cond_1
    const/4 v1, 0x4

    if-ne p1, v1, :cond_2

    .line 156
    sget-object v1, Lcom/qihoo360/loader2/V5FileInfo;->MULTI_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {v1, v0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    goto :goto_0

    .line 158
    :cond_2
    sget-object v1, Lcom/qihoo360/loader2/V5FileInfo;->NORMAL_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {v1, v0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    :goto_0
    const/4 v1, 0x0

    if-eqz v0, :cond_6

    .line 160
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v2

    if-nez v2, :cond_3

    goto :goto_1

    .line 168
    :cond_3
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->toMatchResult()Ljava/util/regex/MatchResult;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 169
    invoke-interface {v0}, Ljava/util/regex/MatchResult;->groupCount()I

    move-result v2

    const/4 v3, 0x1

    if-eq v2, v3, :cond_4

    goto :goto_1

    .line 177
    :cond_4
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_6

    invoke-virtual {p0}, Ljava/io/File;->isFile()Z

    move-result v2

    if-nez v2, :cond_5

    goto :goto_1

    .line 185
    :cond_5
    new-instance v1, Lcom/qihoo360/loader2/V5FileInfo;

    invoke-direct {v1}, Lcom/qihoo360/loader2/V5FileInfo;-><init>()V

    .line 186
    invoke-interface {v0, v3}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    .line 187
    iput-object p0, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    .line 188
    iput p1, v1, Lcom/qihoo360/loader2/V5FileInfo;->mType:I

    .line 189
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_6

    .line 190
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "V5FileInfo.build: found plugin, name="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " file="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    :goto_1
    return-object v1
.end method

.method public static fetchPluginInfo(Landroid/content/Context;Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 9

    .line 450
    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "p-n-"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".jar"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 452
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws000"

    if-eqz p1, :cond_0

    .line 453
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "needUpdate(): local file =  "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 456
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    const/4 v2, 0x0

    if-nez p1, :cond_2

    .line 458
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    .line 459
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "needUpdate(): file is not exists, file =  "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v2

    :cond_2
    const/4 p1, 0x1

    .line 464
    invoke-static {v0, p1}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object p1

    if-nez p1, :cond_3

    const/4 p1, 0x3

    .line 467
    invoke-static {v0, p1}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object p1

    :cond_3
    if-nez p1, :cond_4

    const/4 p1, 0x4

    .line 471
    invoke-static {v0, p1}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object p1

    :cond_4
    move-object v3, p1

    .line 474
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_5

    .line 475
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "needUpdate(): localFileInfo =  "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    if-eqz v3, :cond_6

    const/4 p1, 0x0

    const-string v0, "plugins_v3"

    .line 479
    invoke-virtual {p0, v0, p1}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v4, p0

    invoke-virtual/range {v3 .. v8}, Lcom/qihoo360/loader2/V5FileInfo;->updateV5FileTo(Landroid/content/Context;Ljava/io/File;ZZZ)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    return-object p0

    :cond_6
    return-object v2
.end method

.method static final getFileName(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 138
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "p-n-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ".jar"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static final parseName(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x3

    if-ne p1, v0, :cond_0

    .line 205
    sget-object p1, Lcom/qihoo360/loader2/V5FileInfo;->INCREMENT_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {p1, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    .line 207
    sget-object p1, Lcom/qihoo360/loader2/V5FileInfo;->INCREMENT_SINGLE_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {p1, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    goto :goto_0

    :cond_1
    const/4 v0, 0x4

    if-ne p1, v0, :cond_2

    .line 209
    sget-object p1, Lcom/qihoo360/loader2/V5FileInfo;->MULTI_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {p1, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    goto :goto_0

    .line 211
    :cond_2
    sget-object p1, Lcom/qihoo360/loader2/V5FileInfo;->NORMAL_REGEX:Ljava/util/regex/Pattern;

    invoke-virtual {p1, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    :goto_0
    const/4 p1, 0x0

    if-eqz p0, :cond_5

    .line 213
    invoke-virtual {p0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v0

    if-nez v0, :cond_3

    goto :goto_1

    .line 216
    :cond_3
    invoke-virtual {p0}, Ljava/util/regex/Matcher;->toMatchResult()Ljava/util/regex/MatchResult;

    move-result-object p0

    if-eqz p0, :cond_5

    .line 217
    invoke-interface {p0}, Ljava/util/regex/MatchResult;->groupCount()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_4

    goto :goto_1

    .line 220
    :cond_4
    invoke-interface {p0, v1}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    :goto_1
    return-object p1
.end method


# virtual methods
.method public getName()Ljava/lang/String;
    .locals 1

    .line 229
    iget-object v0, p0, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    return-object v0
.end method

.method final updateV5FileTo(Landroid/content/Context;Ljava/io/File;ZZ)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 6

    const/4 v3, 0x1

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move v4, p3

    move v5, p4

    .line 233
    invoke-virtual/range {v0 .. v5}, Lcom/qihoo360/loader2/V5FileInfo;->updateV5FileTo(Landroid/content/Context;Ljava/io/File;ZZZ)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    return-object p1
.end method

.method final updateV5FileTo(Landroid/content/Context;Ljava/io/File;ZZZ)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 20

    move-object/from16 v1, p0

    move-object/from16 v0, p2

    const-string v2, "ws001"

    const/4 v3, 0x0

    .line 241
    :try_start_0
    new-instance v4, Ljava/io/FileInputStream;

    iget-object v5, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    invoke-direct {v4, v5}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    .line 242
    :try_start_1
    new-instance v5, Ljava/io/DataInputStream;

    invoke-direct {v5, v4}, Ljava/io/DataInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    .line 245
    :try_start_2
    iget v6, v1, Lcom/qihoo360/loader2/V5FileInfo;->mType:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    const/4 v7, 0x3

    if-ne v6, v7, :cond_0

    const-wide/16 v6, 0x10

    .line 246
    :try_start_3
    invoke-virtual {v5, v6, v7}, Ljava/io/DataInputStream;->skip(J)J
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    const/16 v6, 0x10

    goto :goto_0

    :catchall_0
    move-exception v0

    goto/16 :goto_c

    :cond_0
    const/4 v6, 0x0

    .line 250
    :goto_0
    :try_start_4
    invoke-virtual {v5}, Ljava/io/DataInputStream;->readInt()I

    move-result v10

    add-int/lit8 v6, v6, 0x4

    .line 252
    invoke-virtual {v5}, Ljava/io/DataInputStream;->readInt()I

    move-result v11

    add-int/lit8 v6, v6, 0x4

    .line 254
    invoke-virtual {v5}, Ljava/io/DataInputStream;->readInt()I

    move-result v12

    add-int/lit8 v6, v6, 0x4

    .line 256
    invoke-virtual {v5}, Ljava/io/DataInputStream;->readUTF()Ljava/lang/String;

    move-result-object v7

    .line 257
    invoke-virtual {v7}, Ljava/lang/String;->length()I

    move-result v9
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    const/16 v13, 0x20

    const-string v14, " name="

    if-eq v9, v13, :cond_2

    .line 258
    :try_start_5
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 259
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "update v5 plugin: invalid md5 length: length="

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/String;->length()I

    move-result v6

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 433
    :cond_1
    invoke-static {v4}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 434
    invoke-static {v5}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v3

    .line 263
    :cond_2
    :try_start_6
    invoke-virtual {v7}, Ljava/lang/String;->length()I

    move-result v9

    add-int/lit8 v9, v9, 0x2

    add-int/2addr v6, v9

    .line 265
    invoke-virtual {v5}, Ljava/io/DataInputStream;->readInt()I

    move-result v9
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    add-int/lit8 v6, v6, 0x4

    move-object/from16 v19, v4

    int-to-long v3, v9

    .line 267
    :try_start_7
    invoke-virtual {v5, v3, v4}, Ljava/io/DataInputStream;->skip(J)J

    add-int/2addr v6, v9

    .line 270
    invoke-virtual {v5}, Ljava/io/DataInputStream;->readInt()I

    move-result v3

    add-int/lit8 v6, v6, 0x4

    .line 273
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_3

    .line 274
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "update v5 plugin: low="

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, " high="

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, " ver="

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, " md5="

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, " custom="

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, " length="

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v4, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    add-int v4, v6, v3

    int-to-long v8, v4

    .line 277
    iget-object v4, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v4}, Ljava/io/File;->length()J

    move-result-wide v15

    cmp-long v4, v8, v15

    if-eqz v4, :cond_5

    .line 278
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 279
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "update v5 plugin: invalid length: calc.length="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v3}, Ljava/io/File;->length()J

    move-result-wide v3

    int-to-long v6, v6

    sub-long/2addr v3, v6

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    .line 433
    :cond_4
    :goto_1
    invoke-static/range {v19 .. v19}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 434
    invoke-static {v5}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    const/4 v2, 0x0

    return-object v2

    .line 284
    :cond_5
    :try_start_8
    sget v4, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    if-ge v10, v4, :cond_6

    .line 285
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 286
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "update v5 plugin: not supported plugin.low="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " host.compatible.ver="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v3, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    :cond_6
    if-lt v11, v10, :cond_22

    sub-int v4, v11, v10

    const/16 v6, 0x400

    if-le v4, v6, :cond_7

    goto/16 :goto_a

    .line 297
    :cond_7
    iget-object v4, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-static {v4, v10, v11, v12}, Lcom/qihoo360/replugin/model/PluginInfo;->build(Ljava/lang/String;III)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v4

    if-eqz p3, :cond_8

    .line 298
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v6

    invoke-virtual {v6}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v6

    invoke-virtual {v6, v4}, Lcom/qihoo360/replugin/RePluginCallbacks;->isPluginBlocked(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v4

    if-eqz v4, :cond_8

    .line 299
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 300
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "update v5 plugin: failed, plugin is blocked, name="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",low="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",high="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",ver="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_1

    :cond_8
    if-nez p4, :cond_a

    .line 307
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_9

    .line 308
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "update v5 plugin: delay extract f="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 310
    :cond_9
    iget-object v9, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    iget v13, v1, Lcom/qihoo360/loader2/V5FileInfo;->mType:I

    iget-object v0, v1, Lcom/qihoo360/loader2/V5FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v14

    const/4 v15, -0x1

    const/16 v16, -0x1

    const/16 v17, -0x1

    const/16 v18, 0x0

    invoke-static/range {v9 .. v18}, Lcom/qihoo360/replugin/model/PluginInfo;->buildV5(Ljava/lang/String;IIIILjava/lang/String;IIILjava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    .line 433
    :goto_2
    invoke-static/range {v19 .. v19}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 434
    invoke-static {v5}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-object v0

    .line 313
    :cond_a
    :try_start_9
    new-instance v4, Ljava/io/File;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-static {v8, v10, v11, v12}, Lcom/qihoo360/replugin/model/PluginInfo;->format(Ljava/lang/String;III)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ".jar"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v4, v0, v6}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 315
    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v6
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    const-string v8, ""

    if-eqz v6, :cond_e

    :try_start_a
    invoke-virtual {v4}, Ljava/io/File;->length()J

    move-result-wide v9

    int-to-long v11, v3

    cmp-long v6, v9, v11

    if-nez v6, :cond_e

    .line 316
    sget-boolean v6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v6, :cond_b

    .line 317
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "update v5 plugin: checking target ...  name="

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 319
    :cond_b
    invoke-static {v4}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->MD5(Ljava/io/File;)[B

    move-result-object v6

    if-eqz v6, :cond_c

    .line 320
    invoke-static {v6}, Lcom/qihoo360/loader/utils/StringUtils;->toHexString([B)Ljava/lang/String;

    move-result-object v6

    goto :goto_3

    :cond_c
    move-object v6, v8

    .line 321
    :goto_3
    sget-object v9, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    invoke-virtual {v6, v9}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v6

    .line 322
    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_e

    .line 323
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_d

    .line 324
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "update v5 plugin: target match name="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 326
    :cond_d
    invoke-static {v4}, Lcom/qihoo360/replugin/model/PluginInfo;->build(Ljava/io/File;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    goto/16 :goto_2

    .line 329
    :cond_e
    sget-boolean v6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v6, :cond_f

    .line 330
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "update v5 plugin: extract ... name="

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 333
    :cond_f
    new-instance v6, Ljava/io/File;

    const-string v9, "%s_plugin.tmp"

    const/4 v10, 0x1

    new-array v11, v10, [Ljava/lang/Object;

    iget-object v12, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    const/4 v13, 0x0

    aput-object v12, v11, v13

    invoke-static {v9, v11}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v9

    invoke-direct {v6, v0, v9}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 334
    invoke-static {v5, v6}, Lcom/qihoo360/replugin/utils/FileUtils;->copyInputStreamToFile(Ljava/io/InputStream;Ljava/io/File;)V

    .line 340
    invoke-virtual {v6}, Ljava/io/File;->length()J

    move-result-wide v11

    move-object v9, v14

    int-to-long v13, v3

    cmp-long v0, v11, v13

    if-eqz v0, :cond_11

    .line 341
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_10

    .line 342
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "update v5 plugin: extract file length="

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/io/File;->length()J

    move-result-wide v11

    invoke-virtual {v0, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v11, " expected="

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_10
    move v0, v10

    goto :goto_4

    :cond_11
    const/4 v0, 0x0

    :goto_4
    if-nez v0, :cond_14

    .line 349
    invoke-static {v6}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->MD5(Ljava/io/File;)[B

    move-result-object v3

    if-eqz v3, :cond_12

    .line 350
    invoke-static {v3}, Lcom/qihoo360/loader/utils/StringUtils;->toHexString([B)Ljava/lang/String;

    move-result-object v3

    goto :goto_5

    :cond_12
    move-object v3, v8

    .line 351
    :goto_5
    sget-object v11, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    invoke-virtual {v3, v11}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v3

    .line 352
    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_14

    .line 353
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_13

    .line 354
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "update v5 plugin: extract="

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " orig="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", delete tmpfile name="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_13
    move v3, v10

    goto :goto_6

    :cond_14
    move v3, v0

    :goto_6
    if-nez v3, :cond_1c

    .line 362
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_2

    .line 365
    :try_start_b
    invoke-virtual {v6}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v7

    const/16 v11, 0x40

    invoke-static {v0, v7, v11}, Lcom/qihoo360/loader/utils/PackageUtils;->getPackageArchiveInfo(Landroid/content/pm/PackageManager;Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_1

    goto :goto_7

    :catchall_1
    move-exception v0

    .line 367
    :try_start_c
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_15

    .line 368
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_15
    const/4 v0, 0x0

    :goto_7
    if-nez v0, :cond_17

    .line 372
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_16

    .line 373
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "update v5 plugin: can\'t fetch package info:  name="

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_16
    move v3, v10

    :cond_17
    if-eqz p5, :cond_19

    .line 379
    invoke-static {v0}, Lcom/qihoo360/loader2/CertUtils;->isPluginSignatures(Landroid/content/pm/PackageInfo;)Z

    move-result v7

    if-nez v7, :cond_19

    .line 380
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_18

    .line 381
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "update v5 plugin: invalid cert:  name="

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 384
    :cond_18
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "uv5p ic n="

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v11, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 387
    sget-boolean v7, Lcom/qihoo360/replugin/RePluginInternal;->FOR_DEV:Z

    if-nez v7, :cond_19

    move v3, v10

    .line 392
    :cond_19
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v7, :cond_1c

    .line 393
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "update v5 plugin: package="

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_1a

    iget-object v8, v0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    :cond_1a
    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " delete="

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz v3, :cond_1b

    const-string v0, "true"

    goto :goto_8

    :cond_1b
    const-string v0, "false"

    :goto_8
    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 400
    :cond_1c
    invoke-static {v4}, Lcom/qihoo360/replugin/model/PluginInfo;->build(Ljava/io/File;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-nez v0, :cond_1d

    move v3, v10

    :cond_1d
    if-nez v3, :cond_1e

    .line 406
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v7

    .line 407
    invoke-virtual {v6}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8, v7}, Lcom/qihoo360/loader2/PluginNativeLibsHelper;->install(Ljava/lang/String;Ljava/io/File;)Z

    move-result v7

    if-nez v7, :cond_1e

    goto :goto_9

    :cond_1e
    move v10, v3

    :goto_9
    if-eqz v10, :cond_1f

    .line 414
    invoke-static {v6}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    goto/16 :goto_1

    .line 417
    :cond_1f
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_20

    .line 418
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "update v5 plugin: extract success name="

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v1, Lcom/qihoo360/loader2/V5FileInfo;->mName:Ljava/lang/String;

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 421
    :cond_20
    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_21

    .line 422
    invoke-static {v4}, Lcom/qihoo360/replugin/utils/FileUtils;->forceDelete(Ljava/io/File;)V

    .line 426
    :cond_21
    invoke-static {v6, v4}, Lcom/qihoo360/replugin/utils/FileUtils;->moveFile(Ljava/io/File;Ljava/io/File;)V

    goto/16 :goto_2

    .line 291
    :cond_22
    :goto_a
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 292
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "update v5 plugin: invalid plugin.high="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " plugin.low="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_2

    goto/16 :goto_1

    :catchall_2
    move-exception v0

    move-object/from16 v4, v19

    goto :goto_c

    :catchall_3
    move-exception v0

    move-object/from16 v19, v4

    goto :goto_c

    :catchall_4
    move-exception v0

    move-object/from16 v19, v4

    goto :goto_b

    :catchall_5
    move-exception v0

    const/4 v4, 0x0

    :goto_b
    const/4 v5, 0x0

    .line 429
    :goto_c
    :try_start_d
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_23

    .line 430
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_6

    .line 433
    :cond_23
    invoke-static {v4}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 434
    invoke-static {v5}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    const/4 v2, 0x0

    return-object v2

    :catchall_6
    move-exception v0

    .line 433
    invoke-static {v4}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 434
    invoke-static {v5}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method
