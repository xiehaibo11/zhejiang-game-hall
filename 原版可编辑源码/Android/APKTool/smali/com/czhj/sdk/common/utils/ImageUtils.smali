.class public Lcom/czhj/sdk/common/utils/ImageUtils;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "FFD8FF"

    const-string v2, "jpg"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "89504E47"

    const-string v2, "png"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "47494638"

    const-string v2, "gif"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "49492A00"

    const-string v2, "tif"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "424D"

    const-string v2, "bmp"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "41433130"

    const-string v2, "dwg"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "38425053"

    const-string v2, "psd"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "7B5C727466"

    const-string v2, "rtf"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "3C3F786D6C"

    const-string v2, "xml"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "68746D6C3E"

    const-string v2, "html"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "44656C69766572792D646174653A"

    const-string v2, "eml"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "D0CF11E0"

    const-string v2, "doc"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "5374616E64617264204A"

    const-string v2, "mdb"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "252150532D41646F6265"

    const-string v2, "ps"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "255044462D312E"

    const-string v2, "pdf"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "504B0304"

    const-string v2, "docx"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "52617221"

    const-string v2, "rar"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "57415645"

    const-string v2, "wav"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "41564920"

    const-string v2, "avi"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "2E524D46"

    const-string v2, "rm"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "mpg"

    const-string v2, "000001BA"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v2, "000001B3"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "6D6F6F76"

    const-string v2, "mov"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "3026B2758E66CF11"

    const-string v2, "asf"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "4D546864"

    const-string v2, "mid"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "1F8B08"

    const-string v2, "gz"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "4D5A9000"

    const-string v2, "exe/dll"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    const-string v1, "75736167"

    const-string v2, "txt"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Ljava/io/FileInputStream;

    invoke-direct {v1, p0}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x4

    :try_start_1
    new-array v2, p0, [B

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3, p0}, Ljava/io/FileInputStream;->read([BII)I

    invoke-static {v2}, Lcom/czhj/sdk/common/utils/ImageUtils;->a([B)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_0
    :try_start_2
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_1

    :catchall_0
    move-object v1, v0

    :catchall_1
    if-eqz v1, :cond_0

    goto :goto_0

    :catchall_2
    :cond_0
    :goto_1
    return-object v0
.end method

.method private static a([B)Ljava/lang/String;
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    if-eqz p0, :cond_3

    array-length v1, p0

    if-gtz v1, :cond_0

    goto :goto_1

    :cond_0
    const/4 v1, 0x0

    move v2, v1

    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_2

    aget-byte v3, p0, v2

    and-int/lit16 v3, v3, 0xff

    invoke-static {v3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    const/4 v5, 0x2

    if-ge v4, v5, :cond_1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    :cond_1
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getFileType(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageUtils;->a:Ljava/util/HashMap;

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ImageUtils;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0
.end method

.method public static recycleBitmap(Landroid/graphics/Bitmap;)V
    .locals 1

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Landroid/graphics/Bitmap;->recycle()V

    :cond_0
    return-void
.end method
