.class public Lcom/qihoo360/replugin/model/PluginInfo;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable;
.implements Ljava/io/Serializable;
.implements Ljava/lang/Cloneable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/model/PluginInfo$a;
    }
.end annotation


# static fields
.field public static final ADAPTER_CURRENT_VERSION:I = 0xc

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

.field public static final LOCAL_PLUGIN_DATA_SUB_DIR:Ljava/lang/String; = "plugins_v3_data"

.field public static final TYPE_BUILTIN:I = 0x2

.field public static final TYPE_EXTRACTED:I = 0xb

.field public static final TYPE_NOT_INSTALL:I = 0xa

.field public static final TYPE_PN_INSTALLED:I = 0x1

.field public static final TYPE_PN_JAR:I = 0x3


# instance fields
.field private transient a:Lorg/json/JSONObject;

.field private b:Ljava/lang/String;

.field private c:Lcom/qihoo360/replugin/model/PluginInfo;

.field private d:Lcom/qihoo360/replugin/model/PluginInfo;

.field private e:Lcom/qihoo360/replugin/model/PluginInfo;

.field private f:Z

.field private g:Lcom/qihoo360/replugin/model/PluginInfo;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/qihoo360/replugin/model/PluginInfo$1;

    invoke-direct {v0}, Lcom/qihoo360/replugin/model/PluginInfo$1;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/model/PluginInfo;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method private constructor <init>(Landroid/os/Parcel;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    :try_start_0
    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :goto_0
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->a(Lorg/json/JSONObject;)V

    return-void
.end method

.method synthetic constructor <init>(Landroid/os/Parcel;Lcom/qihoo360/replugin/model/PluginInfo$1;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Landroid/os/Parcel;)V

    return-void
.end method

.method private constructor <init>(Lorg/json/JSONObject;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfo;->a(Lorg/json/JSONObject;)V

    return-void
.end method

.method private a(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;
    .locals 3

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

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->mkdir()Z

    :cond_0
    return-object v0
.end method

.method private a()Ljava/lang/String;
    .locals 4

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

.method private a(Ljava/lang/StringBuilder;)V
    .locals 3

    const/16 v0, 0x3c

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v0, 0x3a

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v0, 0x28

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v0, 0x29

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v0, "> "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->g:Lcom/qihoo360/replugin/model/PluginInfo;

    if-eqz v0, :cond_0

    const-string v0, "[HAS_PARENT] "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    const-string v0, "[BUILTIN] "

    :goto_0
    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "[P-N] "

    goto :goto_0

    :cond_2
    const-string v0, "[APK] "

    goto :goto_0

    :goto_1
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isDexExtracted()Z

    move-result v0

    if-eqz v0, :cond_3

    const-string v0, "[DEX_EXTRACTED] "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->isPluginRunning(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "[RUNNING] "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x20

    if-eqz v0, :cond_5

    const-string v2, "processes="

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    if-eqz v0, :cond_6

    const-string v0, "js="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :cond_6
    const-string v0, "dex="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v0, "nlib="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getNativeLibsDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 2

    iput-object p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v0, "upinfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    iput-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->c:Lcom/qihoo360/replugin/model/PluginInfo;

    :cond_0
    const-string v0, "delinfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_1

    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    iput-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->d:Lcom/qihoo360/replugin/model/PluginInfo;

    :cond_1
    const-string v0, "coverinfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_2

    new-instance v1, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    iput-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->e:Lcom/qihoo360/replugin/model/PluginInfo;

    :cond_2
    const-string v0, "cover"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->f:Z

    return-void
.end method

.method public static final format(Ljava/lang/String;III)Ljava/lang/String;
    .locals 1

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


# virtual methods
.method public clone()Ljava/lang/Object;
    .locals 4

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v1

    :goto_0
    iput-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->b:Ljava/lang/String;

    :try_start_0
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    new-instance v2, Ljava/io/ObjectOutputStream;

    invoke-direct {v2, v0}, Ljava/io/ObjectOutputStream;-><init>(Ljava/io/OutputStream;)V

    invoke-virtual {v2, p0}, Ljava/io/ObjectOutputStream;->writeObject(Ljava/lang/Object;)V

    new-instance v2, Ljava/io/ByteArrayInputStream;

    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v0

    invoke-direct {v2, v0}, Ljava/io/ByteArrayInputStream;-><init>([B)V

    new-instance v0, Ljava/io/ObjectInputStream;

    invoke-direct {v0, v2}, Ljava/io/ObjectInputStream;-><init>(Ljava/io/InputStream;)V

    invoke-virtual {v0}, Ljava/io/ObjectInputStream;->readObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/model/PluginInfo;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_5
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_4
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_3

    if-eqz v0, :cond_3

    :try_start_1
    iget-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/qihoo360/replugin/model/PluginInfo;->b:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v1, v0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    iget-object v1, v0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v2, "upinfo"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_1

    new-instance v2, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v2, v1}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    iput-object v2, v0, Lcom/qihoo360/replugin/model/PluginInfo;->c:Lcom/qihoo360/replugin/model/PluginInfo;

    :cond_1
    iget-object v1, v0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v2, "delinfo"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_2

    new-instance v2, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v2, v1}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    iput-object v2, v0, Lcom/qihoo360/replugin/model/PluginInfo;->d:Lcom/qihoo360/replugin/model/PluginInfo;

    :cond_2
    iget-object v1, v0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v2, "coverinfo"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_3

    new-instance v2, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-direct {v2, v1}, Lcom/qihoo360/replugin/model/PluginInfo;-><init>(Lorg/json/JSONObject;)V

    iput-object v2, v0, Lcom/qihoo360/replugin/model/PluginInfo;->e:Lcom/qihoo360/replugin/model/PluginInfo;
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    :catch_0
    move-exception v1

    goto :goto_1

    :catch_1
    move-exception v1

    goto :goto_2

    :catch_2
    move-exception v1

    goto :goto_3

    :catch_3
    move-exception v0

    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    :goto_1
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    goto :goto_4

    :catch_4
    move-exception v0

    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    :goto_2
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_4

    :catch_5
    move-exception v0

    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    :goto_3
    invoke-virtual {v1}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_3
    :goto_4
    return-object v0
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

    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    if-eq v1, v2, :cond_2

    return v0

    :cond_2
    check-cast p1, Lcom/qihoo360/replugin/model/PluginInfo;

    :try_start_0
    iget-object p1, p1, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

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

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "ali"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getApkDir()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/qihoo360/replugin/d;->a()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const-string v1, "plugins_v3"

    :goto_0
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    goto :goto_1

    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getIsPendingCover()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "p_c"

    goto :goto_0

    :cond_1
    const-string v1, "p_a"

    goto :goto_0

    :goto_1
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getApkFile()Ljava/io/File;
    .locals 4

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

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x19

    if-le v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

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

    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

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

    invoke-static {}, Lcom/qihoo360/replugin/d;->a()Landroid/content/Context;

    move-result-object v0

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x19

    if-le v1, v2, :cond_0

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

    invoke-static {}, Lcom/qihoo360/replugin/model/PluginInfo$a;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    const-string v1, "plugins_v3_odex"

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    return-object v0

    :cond_1
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getIsPendingCover()Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "p_c"

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    return-object v0

    :cond_2
    const-string v1, "p_od"

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public getExtraDexDir()Ljava/io/File;
    .locals 2

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

    const-string v1, "_ed"

    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->a(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public getExtraOdexDir()Ljava/io/File;
    .locals 2

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexParentDir()Ljava/io/File;

    move-result-object v0

    const-string v1, "_eod"

    invoke-direct {p0, v0, v1}, Lcom/qihoo360/replugin/model/PluginInfo;->a(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public getFrameworkVersion()I
    .locals 3

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "frm_ver"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getHighInterfaceApi()I
    .locals 3

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "high"

    const/16 v2, 0xa

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getIsPendingCover()Z
    .locals 1

    iget-boolean v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->f:Z

    return v0
.end method

.method public getLowInterfaceApi()I
    .locals 3

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "low"

    const/16 v2, 0xa

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public getName()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "name"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNativeLibsDir()Ljava/io/File;
    .locals 3

    invoke-static {}, Lcom/qihoo360/replugin/d;->a()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const-string v1, "plugins_v3_libs"

    :goto_0
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    goto :goto_1

    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getIsPendingCover()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "p_c"

    goto :goto_0

    :cond_1
    const-string v1, "p_n"

    goto :goto_0

    :goto_1
    new-instance v1, Ljava/io/File;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->makeInstalledFileName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v1
.end method

.method public getPackageName()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "pkgname"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getParentInfo()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->g:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getPath()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "path"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPendingCover()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->e:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getPendingDelete()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->d:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getPendingUpdate()Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->c:Lcom/qihoo360/replugin/model/PluginInfo;

    return-object v0
.end method

.method public getType()I
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "type"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public getVersion()I
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "ver"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public getVersionValue()J
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "verv"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0
.end method

.method public hashCode()I
    .locals 1

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    return v0
.end method

.method public isDexExtracted()Z
    .locals 5

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getDexFile()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public isNeedCover()Z
    .locals 1

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->e:Lcom/qihoo360/replugin/model/PluginInfo;

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

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->d:Lcom/qihoo360/replugin/model/PluginInfo;

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

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->c:Lcom/qihoo360/replugin/model/PluginInfo;

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

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isDexExtracted()Z

    move-result v0

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getParentInfo()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getParentInfo()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->isUsed()Z

    move-result v0

    return v0

    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "used"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public makeInstalledFileName()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isPnPlugin()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    goto :goto_0

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

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    add-int/lit8 v0, v0, -0x58

    invoke-static {v0}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public setFrameworkVersion(I)V
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "frm_ver"

    invoke-static {v0, v1, p1}, Llibrary/c;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setIsUsed(Z)V
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    const-string v1, "used"

    invoke-static {v0, v1, p1}, Llibrary/c;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setPath(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    const-string v1, "path"

    invoke-static {v0, v1, p1}, Llibrary/c;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public setType(I)V
    .locals 2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string v1, "type"

    invoke-static {v0, v1, p1}, Llibrary/c;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PInfo { "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/model/PluginInfo;->a(Ljava/lang/StringBuilder;)V

    const-string v1, " }"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    iget-object p2, p0, Lcom/qihoo360/replugin/model/PluginInfo;->a:Lorg/json/JSONObject;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return-void
.end method
