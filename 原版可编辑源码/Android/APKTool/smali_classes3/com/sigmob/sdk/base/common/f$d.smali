.class Lcom/sigmob/sdk/base/common/f$d;
.super Landroid/os/AsyncTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/common/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "d"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/Object;",
        "Ljava/lang/Void;",
        "Ljava/util/ArrayList<",
        "Lcom/czhj/volley/toolbox/DownloadItem;",
        ">;>;"
    }
.end annotation


# instance fields
.field a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic b:Lcom/sigmob/sdk/base/common/f;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/f;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/czhj/volley/toolbox/DownloadItem;
    .locals 4

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/utils/b;->c:Ljava/lang/String;

    invoke-static {v1}, Lcom/sigmob/sdk/base/utils/b;->c(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".tgz"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v1, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v0}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object p1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->ZIP_FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method


# virtual methods
.method protected varargs a([Ljava/lang/Object;)Ljava/util/ArrayList;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/ArrayList<",
            "Lcom/czhj/volley/toolbox/DownloadItem;",
            ">;"
        }
    .end annotation

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v1, 0x0

    if-eqz v0, :cond_b

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_3

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    const-wide/16 v2, 0x0

    iget-object v4, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    iget-object v4, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isVideoExist()Z

    move-result v4

    if-eqz v4, :cond_2

    iget-object v4, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/czhj/sdk/common/utils/Md5Util;->fileMd5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_OriginMD5()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_OriginMD5()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_1

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    goto :goto_0

    :cond_1
    iget-object v2, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    invoke-static {v2}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/common/f;)Ljava/util/Map;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v2, Ljava/io/File;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v2

    goto :goto_0

    :cond_2
    move-object v4, v1

    :goto_0
    iget-object v5, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->checkVideoValid()Z

    move-result v5

    new-instance v6, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v6}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    if-eqz v5, :cond_3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isVideoExist()Z

    move-result v5

    if-eqz v5, :cond_3

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v6, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    iget-object v5, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v6, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object v5, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v5, v6, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v4, v6, Lcom/czhj/volley/toolbox/DownloadItem;->md5:Ljava/lang/String;

    iput-wide v2, v6, Lcom/czhj/volley/toolbox/DownloadItem;->size:J

    const/4 v2, 0x1

    iput v2, v6, Lcom/czhj/volley/toolbox/DownloadItem;->status:I

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v6, v3, v1, v2}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Z)V

    goto :goto_1

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_4

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v6, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v6, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object v1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v1, v6, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_OriginMD5()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v6, Lcom/czhj/volley/toolbox/DownloadItem;->md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v1, v6, v2}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-virtual {p1, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_4
    :goto_1
    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    sget-object v2, Lcom/sigmob/sdk/base/common/l;->a:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v2

    if-ne v1, v2, :cond_5

    new-instance v1, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v1}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_url()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardZipPath()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object v2, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCard_OriginMD5()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->md5:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    const/4 v2, 0x3

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/Template;->type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, v2, :cond_6

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/common/f$d;->a(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/czhj/volley/toolbox/DownloadItem;

    move-result-object v1

    if-eqz v1, :cond_6

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_6
    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_7

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/Template;->type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, v2, :cond_7

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/common/f$d;->a(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/czhj/volley/toolbox/DownloadItem;

    move-result-object v1

    if-eqz v1, :cond_7

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_7
    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_8

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/Template;->type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, v2, :cond_8

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/common/f$d;->a(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/czhj/volley/toolbox/DownloadItem;

    move-result-object v1

    if-eqz v1, :cond_8

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_8
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isCatchVideo()Z

    move-result v1

    if-eqz v1, :cond_a

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    if-eqz v1, :cond_a

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_a

    const/4 v1, 0x0

    :goto_2
    iget-object v2, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_a

    iget-object v2, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->asset:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;

    if-eqz v2, :cond_9

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    if-eqz v3, :cond_9

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->url:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_9

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->c()Lcom/sigmob/sdk/videocache/h;

    move-result-object v3

    iget-object v4, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    iget-object v4, v4, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->url:Ljava/lang/String;

    invoke-virtual {v3, v4}, Lcom/sigmob/sdk/videocache/h;->c(Ljava/lang/String;)Ljava/io/File;

    move-result-object v3

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_9

    new-instance v4, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v4}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->url:Ljava/lang/String;

    iput-object v2, v4, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v4, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object v2, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->MRAID_VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v2, v4, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v2, v4, v3}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-virtual {p1, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_9
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :cond_a
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "cache() adUnit = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "] videoUrl = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "] endcardUrl = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndcard_url()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-object p1

    :cond_b
    :goto_3
    return-object v1
.end method

.method protected a(Ljava/util/ArrayList;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/czhj/volley/toolbox/DownloadItem;",
            ">;)V"
        }
    .end annotation

    invoke-super {p0, p1}, Landroid/os/AsyncTask;->onPostExecute(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/f;->d(Lcom/sigmob/sdk/base/common/f;)Ljava/util/HashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/ref/WeakReference;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/common/f$b;

    goto :goto_0

    :cond_1
    move-object v0, v1

    :goto_0
    const/4 v2, 0x0

    if-eqz p1, :cond_8

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-nez v3, :cond_2

    goto/16 :goto_3

    :cond_2
    invoke-static {}, Lcom/sigmob/sdk/base/common/p;->a()Lcom/czhj/volley/toolbox/FileDownloader;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/f;->c(Lcom/sigmob/sdk/base/common/f;)Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    const/4 v1, 0x1

    goto :goto_1

    :cond_4
    move v1, v2

    :goto_1
    if-nez v1, :cond_5

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/f;->c(Lcom/sigmob/sdk/base/common/f;)Ljava/util/ArrayList;

    move-result-object v1

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_5
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_6
    :goto_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_9

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/volley/toolbox/DownloadItem;

    iget-object v4, v3, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-static {v4}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "downloader add  item "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v3, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v5, v3, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    sget-object v6, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    if-eq v5, v6, :cond_6

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->n()Ljava/util/HashMap;

    move-result-object v5

    invoke-virtual {v5, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_7

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->n()Ljava/util/HashMap;

    move-result-object v5

    invoke-virtual {v5, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Integer;

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->m()Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/Integer;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_6

    :cond_7
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->n()Ljava/util/HashMap;

    move-result-object v5

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->p()Ljava/lang/Integer;

    move-result-object v6

    invoke-virtual {v5, v4, v6}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v4, p0, Lcom/sigmob/sdk/base/common/f$d;->b:Lcom/sigmob/sdk/base/common/f;

    iget-object v4, v4, Lcom/sigmob/sdk/base/common/f;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    invoke-virtual {v0, v3, v4}, Lcom/czhj/volley/toolbox/FileDownloader;->add(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    goto :goto_2

    :cond_8
    :goto_3
    if-eqz v0, :cond_9

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-interface {v0, v3, v1}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$d;->a:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_d

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    if-eqz v1, :cond_d

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->ad_privacy:Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_d

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v3, Lcom/sigmob/sdk/base/utils/b;->b:Ljava/lang/String;

    invoke-static {v3}, Lcom/sigmob/sdk/base/utils/b;->b(Ljava/lang/String;)Ljava/io/File;

    move-result-object v3

    new-instance v4, Ljava/io/File;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ".html"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v3, v5}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v5

    if-nez v5, :cond_c

    :try_start_0
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-virtual {v3}, Ljava/io/File;->isDirectory()Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-virtual {v3}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v1

    array-length v3, v1

    :goto_4
    if-ge v2, v3, :cond_b

    aget-object v5, v1, v2

    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_a

    invoke-virtual {v5}, Ljava/io/File;->isFile()Z

    move-result v6

    if-eqz v6, :cond_a

    invoke-virtual {v5}, Ljava/io/File;->delete()Z

    move-result v6

    if-eqz v6, :cond_a

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\u5220\u9664\u5355\u4e2a\u6587\u4ef6"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "\u6210\u529f\uff01"

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_a
    add-int/lit8 v2, v2, 0x1

    goto :goto_4

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_b
    new-instance v1, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v1}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    iput-object v0, v1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->OTHER:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v0, v1, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/sigmob/sdk/base/common/p;->a()Lcom/czhj/volley/toolbox/FileDownloader;

    move-result-object p1

    new-instance v0, Lcom/sigmob/sdk/base/common/f$d$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/common/f$d$1;-><init>(Lcom/sigmob/sdk/base/common/f$d;)V

    invoke-virtual {p1, v1, v0}, Lcom/czhj/volley/toolbox/FileDownloader;->add(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    goto :goto_5

    :cond_c
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "privacy_template_url:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " is exists"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    :cond_d
    :goto_5
    return-void
.end method

.method protected synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/f$d;->a([Ljava/lang/Object;)Ljava/util/ArrayList;

    move-result-object p1

    return-object p1
.end method

.method protected synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Ljava/util/ArrayList;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/f$d;->a(Ljava/util/ArrayList;)V

    return-void
.end method
