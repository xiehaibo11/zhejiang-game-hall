.class final Lcom/bykv/vk/openvk/api/plugin/df;
.super Lcom/bytedance/pangle/download/PluginDownloadBean;


# instance fields
.field public df:Ljava/io/File;

.field public rg:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 11
    invoke-direct {p0}, Lcom/bytedance/pangle/download/PluginDownloadBean;-><init>()V

    const-string v0, ""

    .line 8
    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/df;->rg:Ljava/lang/String;

    const/4 v0, 0x0

    .line 9
    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/df;->df:Ljava/io/File;

    .line 12
    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/df;->mBackupUrlList:Ljava/util/List;

    return-void
.end method
