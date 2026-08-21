.class public Lcom/qihoo360/replugin/model/PluginInfo;
.super Ljava/lang/Object;
.source "PluginInfo.java"

# interfaces
.implements Ljava/io/Serializable;
.implements Landroid/os/Parcelable;
.implements Ljava/lang/Cloneable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field

.field public static final FRAMEWORK_VERSION_UNKNOWN:I = 0x0

.field public static final PI_ALI:Ljava/lang/String; = "ali"

.field public static final PI_COVER:Ljava/lang/String; = "cover"

.field public static final PI_COVERINFO:Ljava/lang/String; = "coverinfo"

.field public static final PI_DELINFO:Ljava/lang/String; = "delinfo"

.field public static final PI_FRM_VER:Ljava/lang/String; = "frm_ver"

.field public static final PI_HIGH:Ljava/lang/String; = "high"

.field public static final PI_LOW:Ljava/lang/String; = "low"

.field public static final PI_NAME:Ljava/lang/String; = "name"

.field public static final PI_PATH:Ljava/lang/String; = "path"

.field public static final PI_PKGNAME:Ljava/lang/String; = "pkgname"

.field public static final PI_TYPE:Ljava/lang/String; = "type"

.field public static final PI_UPINFO:Ljava/lang/String; = "upinfo"

.field public static final PI_USED:Ljava/lang/String; = "used"

.field public static final PI_VER:Ljava/lang/String; = "ver"

.field public static final PI_VERV:Ljava/lang/String; = "verv"

.field public static final QUERY_COLUMNS:[Ljava/lang/String;

.field private static final REGEX:Ljava/util/regex/Pattern;

.field private static final TAG:Ljava/lang/String; = "PluginInfo"

.field public static final TYPE_BUILTIN:I = 0x2

.field public static final TYPE_EXTRACTED:I = 0xb

.field public static final TYPE_NOT_INSTALL:I = 0xa

.field public static final TYPE_PN_INSTALLED:I = 0x1

.field public static final TYPE_PN_JAR:I = 0x3

.field public static final VERSION_COMPARATOR:Ljava/util/Comparator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Comparator<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field

.field private static final serialVersionUID:J = -0x5aa475eda9cb7c34L


# instance fields
.field private mIsPendingCover:Z

.field private final transient mJson:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private mParentInfo:Lcom/qihoo360/replugin/model/PluginInfo;

.field private mPendingCover:Lcom/qihoo360/replugin/model/PluginInfo;

.field private mPendingDelete:Lcom/qihoo360/replugin/model/PluginInfo;

.field private mPendingUpdate:Lcom/qihoo360/replugin/model/PluginInfo;


# direct methods
.method static constructor <clinit>()V
    .locals 12

    .line 800
    new-instance v0, Lcom/qihoo360/replugin/model/PluginInfo$1;

    invoke-direct {v0}, Lcom/qihoo360/replugin/model/PluginInfo$1;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    const-string v1, "name"

    const-string v2, "low"

    const-string v3, "high"

    const-string v4, "ver"

    const-string v5, "type"

    const-string v6, "v5type"

    const-string v7, "path"

    const-string v8, "v5index"

    const-string v9, "v5offset"

    const-string v10, "v5length"

    const-string v11, "v5md5"

    .line 944
    filled-new-array/range {v1 .. v11}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/model/PluginInfo;->QUERY_COLUMNS:[Ljava/lang/String;

    const-string v0, "^([^-]+)-([0-9]+)-([0-9]+)-([0-9]+).jar$"

    .line 951
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/model/PluginInfo;->REGEX:Ljava/util/regex/Pattern;

    .line 957
    new-instance v0, Lcom/qihoo360/replugin/model/PluginInfo$2;

    invoke-direct {v0}, Lcom/qihoo360/replugin/model/PluginInfo$2;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/model/PluginInfo;->VERSION_COMPARATOR:Ljava/util/Comparator;

    return-void
.end method

.method private constructor <init>(Landroid/os/Parcel;)V
    .locals 3

    .line 813
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 123
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    .line 817
    :try_start_0
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    .line 818
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_0

    :catch_1
    move-exception v0

    const/4 p1, 0x0

    .line 820
    :goto_0
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_0

    .line 821
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PluginInfo: mJson error! s="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "PluginInfo"

    invoke-static {v1, p1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 823
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 825
    :goto_1
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->initPluginInfo(Lorg/json/JSONObject;)V

    return-void
.end method

.method synthetic constructor <init>(Landroid/os/Parcel;Lcom/qihoo360/replugin/model/PluginInfo$1;)V
    .locals 0

    .line 64
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Landroid/os/Parcel;)V

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;III)V
    .locals 2

    .line 144
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 123
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    const-string v0, "name"

    .line 145
    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 146
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string p2, "low"

    invoke-virtual {p0, p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 147
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string p2, "high"

    invoke-virtual {p0, p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 148
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string p2, "ver"

    invoke-virtual {p0, p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;IIIIILjava/lang/String;IIILjava/lang/String;)V
    .locals 9

    move-object v8, p0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move-object/from16 v6, p7

    move v7, p5

    .line 1054
    invoke-direct/range {v0 .. v7}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V

    .line 1056
    invoke-static {p6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5type"

    invoke-virtual {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 1057
    invoke-static/range {p8 .. p8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5index"

    invoke-virtual {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 1058
    invoke-static/range {p9 .. p9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5offset"

    invoke-virtual {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 1059
    invoke-static/range {p10 .. p10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5length"

    invoke-virtual {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    const-string v0, "v5md5"

    move-object/from16 v1, p11

    .line 1060
    invoke-virtual {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V
    .locals 2

    .line 151
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 123
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    if-gtz p3, :cond_0

    .line 154
    sget p3, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    :cond_0
    if-gtz p4, :cond_1

    .line 157
    sget p4, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    :cond_1
    const-string v0, "pkgname"

    .line 160
    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    const-string v0, "ali"

    .line 161
    invoke-virtual {p0, v0, p2}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 162
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/model/PluginInfo;->makeName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "name"

    invoke-virtual {p0, p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 163
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string p2, "low"

    invoke-virtual {p0, p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 164
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string p2, "high"

    invoke-virtual {p0, p2, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 166
    invoke-direct {p0, p5}, Lcom/qihoo360/replugin/model/PluginInfo;->setVersion(I)V

    .line 167
    invoke-virtual {p0, p6}, Lcom/qihoo360/replugin/model/PluginInfo;->setPath(Ljava/lang/String;)V

    .line 168
    invoke-virtual {p0, p7}, Lcom/qihoo360/replugin/model/PluginInfo;->setType(I)V

    return-void
.end method

.method private constructor <init>(Lorg/json/JSONObject;)V
    .locals 2

    .line 140
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 123
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    .line 141
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->initPluginInfo(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static final build(Landroid/database/Cursor;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 13

    const/4 v0, 0x0

    .line 1034
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    const/4 v0, 0x1

    .line 1035
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    const/4 v0, 0x2

    .line 1036
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v4

    const/4 v0, 0x3

    .line 1037
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v5

    const/4 v0, 0x4

    .line 1038
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v6

    const/4 v0, 0x5

    .line 1039
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v7

    const/4 v0, 0x6

    .line 1040
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v8

    const/4 v0, 0x7

    .line 1041
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v9

    const/16 v0, 0x8

    .line 1042
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v10

    const/16 v0, 0x9

    .line 1043
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getInt(I)I

    move-result v11

    const/16 v0, 0xa

    .line 1044
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v12

    .line 1045
    new-instance p0, Lcom/qihoo360/replugin/model/PluginInfo;

    move-object v1, p0

    invoke-direct/range {v1 .. v12}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Ljava/lang/String;IIIIILjava/lang/String;IIILjava/lang/String;)V

    return-object p0
.end method

.method public static final build(Ljava/io/File;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 17

    .line 976
    sget-object v0, Lcom/qihoo360/replugin/model/PluginInfo;->REGEX:Ljava/util/regex/Pattern;

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-eqz v0, :cond_5

    .line 977
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v3

    if-nez v3, :cond_0

    goto/16 :goto_1

    .line 983
    :cond_0
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->toMatchResult()Ljava/util/regex/MatchResult;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 984
    invoke-interface {v0}, Ljava/util/regex/MatchResult;->groupCount()I

    move-result v3

    const/4 v4, 0x4

    if-eq v3, v4, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x1

    .line 990
    invoke-interface {v0, v1}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object v6

    const/4 v1, 0x2

    .line 991
    invoke-interface {v0, v1}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    const/4 v1, 0x3

    .line 992
    invoke-interface {v0, v1}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    .line 993
    invoke-interface {v0, v4}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v9

    .line 994
    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v12

    .line 995
    new-instance v0, Lcom/qihoo360/replugin/model/PluginInfo;

    const/4 v10, 0x1

    const/4 v11, 0x0

    const/4 v13, -0x1

    const/4 v14, -0x1

    const/4 v15, -0x1

    const/16 v16, 0x0

    move-object v5, v0

    invoke-direct/range {v5 .. v16}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Ljava/lang/String;IIIIILjava/lang/String;IIILjava/lang/String;)V

    .line 996
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_2

    .line 997
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PluginInfo.build: found plugin, name="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " low="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 998
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " high="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " ver="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 999
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 997
    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-object v0

    .line 985
    :cond_3
    :goto_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 986
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PluginInfo.build: skip, no match2, file="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return-object v1

    .line 978
    :cond_5
    :goto_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_6

    .line 979
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PluginInfo.build: skip, no match1, file="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    return-object v1
.end method

.method public static final build(Ljava/lang/String;III)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    .line 1049
    new-instance v0, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Ljava/lang/String;III)V

    return-object v0
.end method

.method private final buildCompareValue()J
    .locals 6

    .line 1138
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v0

    and-int/lit16 v0, v0, 0x7fff

    int-to-long v0, v0

    const/16 v2, 0x30

    shl-long/2addr v0, v2

    .line 1140
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v2

    const v3, 0xffff

    and-int/2addr v2, v3

    int-to-long v2, v2

    const/16 v4, 0x20

    shl-long/2addr v2, v4

    .line 1142
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v4

    int-to-long v4, v4

    or-long/2addr v0, v2

    or-long/2addr v0, v4

    return-wide v0
.end method

.method public static final buildFromBuiltInJson(Lorg/json/JSONObject;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 9

    const-string v0, "pkg"

    .line 1005
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v0, "name"

    .line 1006
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v0, "path"

    .line 1007
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 1008
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 1014
    :cond_0
    sget v0, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    const-string v1, "low"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    .line 1015
    sget v0, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    const-string v1, "high"

    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v0, "ver"

    .line 1016
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    .line 1017
    new-instance v0, Lcom/qihoo360/replugin/model/PluginInfo;

    const/4 v8, 0x2

    move-object v1, v0

    invoke-direct/range {v1 .. v8}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V

    const-string v1, "frm"

    .line 1020
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    const/4 v1, 0x1

    if-ge p0, v1, :cond_1

    .line 1022
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p0

    invoke-virtual {p0}, Lcom/qihoo360/replugin/RePluginConfig;->getDefaultFrameworkVersion()I

    move-result p0

    .line 1024
    :cond_1
    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/model/PluginInfo;->setFrameworkVersion(I)V

    return-object v0

    .line 1009
    :cond_2
    :goto_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_3

    .line 1010
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "buildFromBuiltInJson: Invalid json. j="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "PluginInfo"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const/4 p0, 0x0

    return-object p0
.end method

.method public static final buildV5(Ljava/lang/String;IIIILjava/lang/String;IIILjava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 13

    .line 1030
    new-instance v12, Lcom/qihoo360/replugin/model/PluginInfo;

    const/4 v5, 0x3

    move-object v0, v12

    move-object v1, p0

    move v2, p1

    move v3, p2

    move/from16 v4, p3

    move/from16 v6, p4

    move-object/from16 v7, p5

    move/from16 v8, p6

    move/from16 v9, p7

    move/from16 v10, p8

    move-object/from16 v11, p9

    invoke-direct/range {v0 .. v11}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Ljava/lang/String;IIIIILjava/lang/String;IIILjava/lang/String;)V

    return-object v12
.end method

.method static createByJO(Lorg/json/JSONObject;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    .line 770
    invoke-virtual {p0}, Lorg/json/JSONObject;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 771
    :cond_0
    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, p0}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    .line 773
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    return-object v0

    :cond_1
    return-object v1

    :cond_2
    :goto_0
    return-object v0
.end method

.method public static final format(Ljava/lang/String;III)Ljava/lang/String;
    .locals 1

    .line 972
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "-"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private formatName()Ljava/lang/String;
    .locals 4

    .line 1064
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v2

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v3

    invoke-static {v0, v1, v2, v3}, Lcom/qihoo360/replugin/model/PluginInfo;->format(Ljava/lang/String;III)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            "TT;)TT;"
        }
    .end annotation

    .line 1205
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 1206
    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    move-object p2, p1

    :cond_0
    return-object p2
.end method

.method private getDexDir(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;
    .locals 3

    .line 411
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->makeInstalledFileName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, p1, p2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 413
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 414
    invoke-virtual {v0}, Ljava/io/File;->mkdir()Z

    :cond_0
    return-object v0
.end method

.method private initPluginInfo(Lorg/json/JSONObject;)V
    .locals 3

    .line 172
    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v0

    .line 173
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 174
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 175
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {p0, v1, v2}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    const-string v0, "upinfo"

    .line 178
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 180
    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingUpdate(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :cond_1
    const-string v0, "delinfo"

    .line 184
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 186
    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingDelete(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :cond_2
    const-string v0, "coverinfo"

    .line 190
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 192
    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->setPendingCover(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :cond_3
    const-string v0, "cover"

    .line 196
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setIsPendingCover(Z)V

    return-void
.end method

.method private makeName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 202
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p2

    .line 205
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    return-object p1

    :cond_1
    const-string p1, ""

    return-object p1
.end method

.method public static parseFromJsonText(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 2

    const/4 v0, 0x0

    .line 264
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    const-string p0, "pkgname"

    .line 273
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "type"

    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "ver"

    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 274
    new-instance p0, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {p0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    return-object p0

    :cond_0
    return-object v0

    :catch_0
    move-exception p0

    .line 266
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    .line 267
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_1
    return-object v0
.end method

.method public static parseFromPackageInfo(Landroid/content/pm/PackageInfo;Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 11

    .line 216
    iget-object v0, p0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    .line 217
    iget-object v2, p0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    .line 223
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const-string v1, "com.qihoo360.plugin.name"

    .line 228
    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v3, "com.qihoo360.plugin.version.low"

    .line 231
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v3

    const-string v4, "com.qihoo360.plugin.version.high"

    .line 232
    invoke-virtual {v0, v4}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v4

    const-string v5, "com.qihoo360.plugin.version.ver"

    .line 235
    invoke-virtual {v0, v5}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v5

    move v10, v3

    move-object v3, v1

    move v1, v10

    goto :goto_0

    :cond_0
    const/4 v3, 0x0

    move v4, v1

    move v5, v4

    :goto_0
    if-gtz v1, :cond_1

    .line 240
    sget v1, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    :cond_1
    move v6, v1

    if-gtz v4, :cond_2

    .line 243
    sget v1, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    move v7, v1

    goto :goto_1

    :cond_2
    move v7, v4

    :goto_1
    if-gtz v5, :cond_3

    .line 246
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I

    goto :goto_2

    :cond_3
    move p0, v5

    .line 249
    :goto_2
    new-instance v9, Lcom/qihoo360/replugin/model/PluginInfo;

    const/16 v8, 0xa

    move-object v1, v9

    move v4, v6

    move v5, v7

    move v6, p0

    move-object v7, p1

    invoke-direct/range {v1 .. v8}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;I)V

    .line 252
    invoke-virtual {v9, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->setFrameworkVersionByMeta(Landroid/os/Bundle;)V

    return-object v9
.end method

.method private setAlias(Ljava/lang/String;)V
    .locals 1

    .line 786
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "ali"

    .line 787
    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private setPackageName(Ljava/lang/String;)V
    .locals 1

    .line 780
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "pkgname"

    .line 781
    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private setVersion(I)V
    .locals 2

    .line 792
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "ver"

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    .line 793
    invoke-direct {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->buildCompareValue()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    const-string v0, "verv"

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method private toContentString(Ljava/lang/StringBuilder;)V
    .locals 3

    const/16 v0, 0x3c

    .line 861
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 862
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v0, 0x3a

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v0, 0x28

    .line 863
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v0, 0x29

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v0, "> "

    .line 864
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 868
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mParentInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v0, :cond_0

    const-string v0, "[HAS_PARENT] "

    .line 869
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 874
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    const-string v0, "[BUILTIN] "

    .line 875
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 876
    :cond_1
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "[P-N] "

    .line 877
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_2
    const-string v0, "[APK] "

    .line 879
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 884
    :goto_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isDexExtracted()Z

    move-result v0

    if-eqz v0, :cond_3

    const-string v0, "[DEX_EXTRACTED] "

    .line 885
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 889
    :cond_3
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->isPluginRunning(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "[RUNNING] "

    .line 890
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 894
    :cond_4
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x20

    if-eqz v0, :cond_5

    const-string v2, "processes="

    .line 896
    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 900
    :cond_5
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    if-eqz v0, :cond_6

    const-string v0, "js="

    .line 901
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :cond_6
    const-string v0, "dex="

    .line 906
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v0, "nlib="

    .line 907
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method


# virtual methods
.method public final canReplaceForPn(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 3

    .line 1112
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    .line 1113
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    if-ne v0, v1, :cond_0

    .line 1114
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1115
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v2

    if-ne v0, v2, :cond_0

    .line 1116
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v2

    if-ne v0, v2, :cond_0

    .line 1117
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p1

    if-ne v0, p1, :cond_0

    return v1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public clone()Ljava/lang/Object;
    .locals 3

    .line 831
    :try_start_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 832
    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-direct {v1, v2}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v0

    .line 834
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    const/4 v0, 0x0

    return-object v0
.end method

.method public final deleteObsolote(Landroid/content/Context;)Z
    .locals 1

    .line 1088
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    return v0

    .line 1091
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    return v0

    .line 1094
    :cond_1
    new-instance p1, Ljava/io/File;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    move-result p1

    .line 1098
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    .line 1099
    invoke-static {v0}, Lcom/qihoo360/loader2/PluginNativeLibsHelper;->clear(Ljava/io/File;)V

    return p1
.end method

.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    if-ne p0, p1, :cond_1

    const/4 p1, 0x1

    return p1

    .line 926
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    if-eq v1, v2, :cond_2

    return v0

    .line 930
    :cond_2
    check-cast p1, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 933
    :try_start_0
    iget-object p1, p1, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    return v0
.end method

.method public getAlias()Ljava/lang/String;
    .locals 2

    const-string v0, "ali"

    const-string v1, ""

    .line 299
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method public getApkDir()Ljava/lang/String;
    .locals 3

    .line 389
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    .line 391
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const-string v1, "plugins_v3"

    .line 392
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    goto :goto_0

    .line 393
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getIsPendingCover()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "p_c"

    .line 394
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    goto :goto_0

    :cond_1
    const-string v1, "p_a"

    .line 396
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    .line 399
    :goto_0
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getApkFile()Ljava/io/File;
    .locals 4

    .line 379
    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkDir()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->makeInstalledFileName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".jar"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public getDexFile()Ljava/io/File;
    .locals 4

    .line 490
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x19

    if-le v0, v1, :cond_0

    .line 491
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

    .line 492
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->makeInstalledFileName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".odex"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v1

    .line 494
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

    .line 495
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->makeInstalledFileName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".dex"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v1
.end method

.method public getDexParentDir()Ljava/io/File;
    .locals 3

    .line 460
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    .line 462
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x19

    if-le v1, v2, :cond_0

    .line 463
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getApkDir()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "oat"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/qihoo360/loader2/VMRuntimeCompat;->getArtOatCpuType()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    return-object v0

    .line 465
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    const-string v1, "plugins_v3_odex"

    .line 466
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    return-object v0

    .line 467
    :cond_1
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getIsPendingCover()Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "p_c"

    .line 468
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    return-object v0

    :cond_2
    const-string v1, "p_od"

    .line 470
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public getExtraDexDir()Ljava/io/File;
    .locals 2

    .line 428
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

    const-string v1, "_ed"

    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexDir(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public getExtraOdexDir()Ljava/io/File;
    .locals 2

    .line 440
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

    const-string v1, "_eod"

    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexDir(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public getFrameworkVersion()I
    .locals 2

    const/4 v0, 0x0

    .line 681
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "frm_ver"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getHighInterfaceApi()I
    .locals 2

    .line 671
    sget v0, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "high"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getIsPendingCover()Z
    .locals 1

    .line 642
    iget-boolean v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mIsPendingCover:Z

    return v0
.end method

.method public getJSON()Lorg/json/JSONObject;
    .locals 2

    .line 714
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    return-object v0
.end method

.method public getLowInterfaceApi()I
    .locals 2

    .line 662
    sget v0, Lcom/qihoo360/loader2/Constant;->ADAPTER_COMPATIBLE_VERSION:I

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "low"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getName()Ljava/lang/String;
    .locals 2

    const-string v0, "name"

    const-string v1, ""

    .line 285
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method public getNativeLibsDir()Ljava/io/File;
    .locals 3

    .line 509
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    .line 511
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const-string v1, "plugins_v3_libs"

    .line 512
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    goto :goto_0

    .line 513
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getIsPendingCover()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "p_c"

    .line 514
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    goto :goto_0

    :cond_1
    const-string v1, "p_n"

    .line 516
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    .line 518
    :goto_0
    new-instance v1, Ljava/io/File;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->makeInstalledFileName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v1
.end method

.method public getPackageName()Ljava/lang/String;
    .locals 2

    const-string v0, "pkgname"

    const-string v1, ""

    .line 292
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method public getParentInfo()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    .line 761
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mParentInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getPath()Ljava/lang/String;
    .locals 2

    const-string v0, "path"

    const-string v1, ""

    .line 313
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method public getPendingCover()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    .line 617
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingCover:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getPendingDelete()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    .line 584
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingDelete:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getPendingUpdate()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    .line 551
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingUpdate:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getType()I
    .locals 2

    const/4 v0, 0x0

    .line 525
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "type"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getV5Index()I
    .locals 2

    const/4 v0, -0x1

    .line 1172
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5index"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getV5Length()I
    .locals 2

    const/4 v0, -0x1

    .line 1190
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5length"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getV5MD5()Ljava/lang/String;
    .locals 2

    const-string v0, "v5md5"

    const-string v1, ""

    .line 1199
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method public getV5Offset()I
    .locals 2

    const/4 v0, -0x1

    .line 1181
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5offset"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getV5Type()I
    .locals 2

    const/4 v0, 0x0

    .line 1163
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "v5type"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getVersion()I
    .locals 2

    const/4 v0, 0x0

    .line 306
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ver"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public getVersionValue()J
    .locals 2

    const-wide/16 v0, 0x0

    .line 357
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v1, "verv"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method

.method public hashCode()I
    .locals 1

    .line 913
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->hashCode()I

    move-result v0

    return v0
.end method

.method public isDexExtracted()Z
    .locals 4

    .line 366
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    .line 368
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {v0}, Lcom/qihoo360/replugin/utils/FileUtils;->sizeOf(Ljava/io/File;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isNeedCover()Z
    .locals 1

    .line 608
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingCover:Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isNeedUninstall()Z
    .locals 1

    .line 575
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingDelete:Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isNeedUpdate()Z
    .locals 1

    .line 542
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingUpdate:Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isPnPlugin()Z
    .locals 3

    .line 1153
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x3

    if-eq v0, v2, :cond_1

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :cond_1
    :goto_0
    return v1
.end method

.method public isUsed()Z
    .locals 2

    .line 331
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 333
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isDexExtracted()Z

    move-result v0

    return v0

    .line 334
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getParentInfo()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 336
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getParentInfo()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->isUsed()Z

    move-result v0

    return v0

    :cond_1
    const/4 v0, 0x0

    .line 339
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    const-string v1, "used"

    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public makeInstalledFileName()Ljava/lang/String;
    .locals 2

    .line 726
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 734
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "ak"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 735
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    add-int/lit8 v0, v0, -0x58

    .line 736
    invoke-static {v0}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 727
    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->formatName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final match()Z
    .locals 3

    .line 1125
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/RePluginCallbacks;->isPluginBlocked(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v0

    .line 1127
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    const-string v1, "ws001"

    const-string v2, "match result: plugin is blocked"

    .line 1129
    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public put(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            "TT;)V"
        }
    .end annotation

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    .line 1211
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_0
    return-void
.end method

.method public setFrameworkVersion(I)V
    .locals 1

    .line 691
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "frm_ver"

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setFrameworkVersionByMeta(Landroid/os/Bundle;)V
    .locals 2

    .line 701
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getDefaultFrameworkVersion()I

    move-result v0

    if-eqz p1, :cond_0

    const-string v1, "com.qihoo360.framework.ver"

    .line 704
    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    const/4 v1, 0x1

    if-ge p1, v1, :cond_1

    goto :goto_1

    :cond_1
    move v0, p1

    .line 709
    :goto_1
    invoke-virtual {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->setFrameworkVersion(I)V

    return-void
.end method

.method public setIsPendingCover(Z)V
    .locals 1

    .line 650
    iput-boolean p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mIsPendingCover:Z

    const-string v0, "cover"

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    .line 652
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 654
    :cond_0
    iget-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    return-void
.end method

.method public setIsUsed(Z)V
    .locals 1

    .line 350
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    const-string v0, "used"

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setParentInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 0

    .line 766
    iput-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mParentInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    return-void
.end method

.method public setPath(Ljava/lang/String;)V
    .locals 1

    const-string v0, "path"

    .line 321
    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setPendingCover(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 1

    .line 627
    iput-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingCover:Lcom/qihoo360/replugin/model/PluginInfo;

    const-string v0, "coverinfo"

    if-eqz p1, :cond_0

    .line 629
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 631
    :cond_0
    iget-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    return-void
.end method

.method public setPendingDelete(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 1

    .line 594
    iput-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingDelete:Lcom/qihoo360/replugin/model/PluginInfo;

    const-string v0, "delinfo"

    if-eqz p1, :cond_0

    .line 596
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 598
    :cond_0
    iget-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    return-void
.end method

.method public setPendingUpdate(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 1

    .line 561
    iput-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mPendingUpdate:Lcom/qihoo360/replugin/model/PluginInfo;

    const-string v0, "upinfo"

    if-eqz p1, :cond_0

    .line 563
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    goto :goto_0

    .line 565
    :cond_0
    iget-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->mJson:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    return-void
.end method

.method public setType(I)V
    .locals 1

    .line 533
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v0, "type"

    invoke-virtual {p0, v0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->put(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public final to(Landroid/content/Intent;)V
    .locals 2

    .line 1074
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    const-string v1, "name"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1075
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v0

    const-string v1, "low"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1076
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v0

    const-string v1, "high"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1077
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    const-string v1, "ver"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1078
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    const-string v1, "type"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1079
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Type()I

    move-result v0

    const-string v1, "v5type"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1080
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v0

    const-string v1, "path"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1081
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Index()I

    move-result v0

    const-string v1, "v5index"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1082
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Offset()I

    move-result v0

    const-string v1, "v5offset"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1083
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Length()I

    move-result v0

    const-string v1, "v5length"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1084
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5MD5()Ljava/lang/String;

    move-result-object v0

    const-string v1, "v5md5"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    return-void
.end method

.method final to(Landroid/database/MatrixCursor;)V
    .locals 1

    .line 1068
    invoke-virtual {p1}, Landroid/database/MatrixCursor;->newRow()Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getLowInterfaceApi()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getHighInterfaceApi()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    .line 1069
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Type()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    .line 1070
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Index()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Offset()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5Length()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    move-result-object p1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getV5MD5()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/database/MatrixCursor$RowBuilder;->add(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 851
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PInfo { "

    .line 852
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 853
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->toContentString(Ljava/lang/StringBuilder;)V

    const-string v1, " }"

    .line 854
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 855
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public update(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 1

    .line 748
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->setVersion(I)V

    .line 749
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->setPath(Ljava/lang/String;)V

    .line 750
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->setType(I)V

    .line 751
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->setPackageName(Ljava/lang/String;)V

    .line 752
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->setAlias(Ljava/lang/String;)V

    return-void
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    .line 846
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object p2

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return-void
.end method
