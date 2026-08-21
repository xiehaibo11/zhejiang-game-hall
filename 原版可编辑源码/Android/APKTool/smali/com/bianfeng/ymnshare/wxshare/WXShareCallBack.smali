.class public Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;
.super Ljava/lang/Object;
.source "WXShareCallBack.java"

# interfaces
.implements Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;


# static fields
.field static final KEY_GAME_ACTIVITY:Ljava/lang/String; = "GAME_ACTIVITY"

.field public static final WX_FLAG_REQUEST_SUBSCRIBE_FAILED:I = 0x88ba

.field public static final WX_FLAG_REQUEST_SUBSCRIBE_SUCCEED:I = 0x88b9

.field private static final WX_FLAG_SHARERESULT_DENY:I = 0x323

.field public static final WX_FLAG_SHARERESULT_FAIL:I = 0x322

.field private static final WX_FLAG_SHARERESULT_SUCCESS:I = 0x321

.field private static final WX_FLAG_SHARERESULT_UNKNOWN:I = 0x324

.field private static final WX_TYPE_SHARE:I = 0x2

.field private static volatile isFirst:Z = true


# instance fields
.field private mContext:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    iput-object p1, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    return-void
.end method

.method private getGameActivityName()Ljava/lang/String;
    .locals 2

    .line 184
    invoke-direct {p0}, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->getGameActivityNameByManifest()Ljava/lang/String;

    move-result-object v0

    .line 185
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 186
    invoke-direct {p0}, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->getGameActivityNameByDefault()Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private getGameActivityNameByDefault()Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "org.cocos2dx.cpp.AppActivity"

    .line 206
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private getGameActivityNameByManifest()Ljava/lang/String;
    .locals 3

    .line 193
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 194
    iget-object v1, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x80

    .line 195
    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 196
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "GAME_ACTIVITY"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 198
    invoke-virtual {v0}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    const/4 v0, 0x0

    return-object v0
.end method

.method private goToShowMsg(Lcom/tencent/mm/opensdk/modelmsg/ShowMessageFromWX$Req;)V
    .locals 4

    .line 128
    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelmsg/ShowMessageFromWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    .line 129
    iget-object v0, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->mediaObject:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;

    check-cast v0, Lcom/tencent/mm/opensdk/modelmsg/WXAppExtendObject;

    .line 131
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    const-string v2, "description: "

    .line 132
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 133
    iget-object v2, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->description:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "\n"

    .line 134
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "extInfo: "

    .line 135
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 136
    iget-object v3, v0, Lcom/tencent/mm/opensdk/modelmsg/WXAppExtendObject;->extInfo:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 137
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "filePath: "

    .line 138
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 139
    iget-object v0, v0, Lcom/tencent/mm/opensdk/modelmsg/WXAppExtendObject;->filePath:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 141
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v2, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-direct {v0, v2}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 142
    iget-object v2, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->title:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 143
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 145
    iget-object v1, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    if-eqz v1, :cond_0

    iget-object v1, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    array-length v1, v1

    if-lez v1, :cond_0

    .line 146
    new-instance v1, Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-direct {v1, v2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 147
    iget-object v2, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    const/4 v3, 0x0

    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->thumbData:[B

    array-length p1, p1

    invoke-static {v2, v3, p1}, Landroid/graphics/BitmapFactory;->decodeByteArray([BII)Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {v1, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 148
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setView(Landroid/view/View;)Landroid/app/AlertDialog$Builder;

    .line 150
    :cond_0
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    return-void
.end method

.method private startMainNoParam(Lcom/tencent/mm/opensdk/modelmsg/ShowMessageFromWX$Req;)V
    .locals 3

    const-string v0, "==========startMainNoParam======"

    .line 154
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 155
    iget-object v0, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 156
    invoke-direct {p0}, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->getGameActivityName()Ljava/lang/String;

    move-result-object v1

    .line 158
    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelmsg/ShowMessageFromWX$Req;->message:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;

    .line 159
    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage;->mediaObject:Lcom/tencent/mm/opensdk/modelmsg/WXMediaMessage$IMediaObject;

    check-cast p1, Lcom/tencent/mm/opensdk/modelmsg/WXAppExtendObject;

    .line 160
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 161
    new-instance v2, Landroid/content/ComponentName;

    invoke-direct {v2, v0, v1}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 163
    invoke-virtual {v0, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 165
    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelmsg/WXAppExtendObject;->extInfo:Ljava/lang/String;

    .line 166
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnshare/utils/Tools;->setUriCache(Landroid/net/Uri;)V

    .line 167
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    const/high16 p1, 0x10000000

    .line 169
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 170
    iget-object p1, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {p1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    .line 172
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v0

    .line 174
    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelmsg/WXAppExtendObject;->extInfo:Ljava/lang/String;

    .line 175
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnshare/utils/Tools;->setUriCache(Landroid/net/Uri;)V

    .line 176
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 178
    iget-object p1, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {p1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public onReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)V
    .locals 2

    .line 64
    invoke-virtual {p1}, Lcom/tencent/mm/opensdk/modelbase/BaseReq;->getType()I

    move-result v0

    const/4 v1, 0x4

    if-ne v1, v0, :cond_0

    sget-boolean v0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->isFirst:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 66
    sput-boolean v0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->isFirst:Z

    .line 67
    check-cast p1, Lcom/tencent/mm/opensdk/modelmsg/ShowMessageFromWX$Req;

    invoke-direct {p0, p1}, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->startMainNoParam(Lcom/tencent/mm/opensdk/modelmsg/ShowMessageFromWX$Req;)V

    :cond_0
    return-void
.end method

.method public onResp(Lcom/tencent/mm/opensdk/modelbase/BaseResp;)V
    .locals 3

    .line 74
    invoke-virtual {p1}, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->getType()I

    move-result v0

    const/16 v1, 0x12

    if-ne v0, v1, :cond_2

    .line 75
    check-cast p1, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Resp;

    .line 76
    new-instance v0, Lcom/google/gson/JsonObject;

    invoke-direct {v0}, Lcom/google/gson/JsonObject;-><init>()V

    .line 77
    iget-object v1, p1, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Resp;->openId:Ljava/lang/String;

    const-string v2, "open_id"

    invoke-virtual {v0, v2, v1}, Lcom/google/gson/JsonObject;->addProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    iget-object v1, p1, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Resp;->action:Ljava/lang/String;

    const-string v2, "action"

    invoke-virtual {v0, v2, v1}, Lcom/google/gson/JsonObject;->addProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    iget-object v1, p1, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Resp;->templateID:Ljava/lang/String;

    const-string v2, "template_id"

    invoke-virtual {v0, v2, v1}, Lcom/google/gson/JsonObject;->addProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 80
    iget-object v1, p1, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Resp;->reserved:Ljava/lang/String;

    const-string v2, "reserved"

    invoke-virtual {v0, v2, v1}, Lcom/google/gson/JsonObject;->addProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 81
    iget v1, p1, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Resp;->scene:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "scene"

    invoke-virtual {v0, v2, v1}, Lcom/google/gson/JsonObject;->addProperty(Ljava/lang/String;Ljava/lang/Number;)V

    .line 82
    new-instance v1, Lcom/google/gson/Gson;

    invoke-direct {v1}, Lcom/google/gson/Gson;-><init>()V

    invoke-virtual {v1, v0}, Lcom/google/gson/Gson;->toJson(Lcom/google/gson/JsonElement;)Ljava/lang/String;

    move-result-object v0

    .line 84
    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelbiz/SubscribeMessage$Resp;->action:Ljava/lang/String;

    const-string v1, "confirm"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const p1, 0x88b9

    goto :goto_0

    :cond_0
    const p1, 0x88ba

    .line 89
    :goto_0
    invoke-static {p1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    .line 90
    iget-object p1, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 91
    invoke-direct {p0}, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->getGameActivityName()Ljava/lang/String;

    move-result-object v0

    .line 92
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 93
    new-instance v1, Landroid/content/ComponentName;

    invoke-direct {v1, p1, v0}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 94
    new-instance p1, Landroid/content/Intent;

    invoke-direct {p1}, Landroid/content/Intent;-><init>()V

    .line 95
    invoke-virtual {p1, v1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const/high16 v0, 0x10000000

    .line 96
    invoke-virtual {p1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 97
    iget-object v0, p0, Lcom/bianfeng/ymnshare/wxshare/WXShareCallBack;->mContext:Landroid/content/Context;

    invoke-virtual {v0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_1
    return-void

    :cond_2
    const/4 v0, 0x2

    .line 102
    invoke-virtual {p1}, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->getType()I

    move-result v1

    if-eq v0, v1, :cond_3

    return-void

    .line 105
    :cond_3
    invoke-virtual {p1}, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->getType()I

    move-result v0

    const/16 v1, 0x13

    if-ne v0, v1, :cond_4

    .line 106
    move-object v0, p1

    check-cast v0, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Resp;

    .line 107
    iget-object v0, v0, Lcom/tencent/mm/opensdk/modelbiz/WXLaunchMiniProgram$Resp;->extMsg:Ljava/lang/String;

    .line 108
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 111
    :cond_4
    iget p1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    const/4 v0, -0x4

    if-eq p1, v0, :cond_7

    const/4 v0, -0x2

    if-eq p1, v0, :cond_6

    if-eqz p1, :cond_5

    const/16 p1, 0x324

    const-string v0, "\u53d1\u9001\u8fd4\u56de"

    .line 122
    invoke-static {p1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    goto :goto_1

    :cond_5
    const/16 p1, 0x321

    const-string v0, "\u53d1\u9001\u6210\u529f"

    .line 113
    invoke-static {p1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    goto :goto_1

    :cond_6
    const/16 p1, 0x322

    const-string v0, "\u53d1\u9001\u53d6\u6d88"

    .line 116
    invoke-static {p1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    goto :goto_1

    :cond_7
    const/16 p1, 0x323

    const-string v0, "\u53d1\u9001\u88ab\u62d2\u7edd"

    .line 119
    invoke-static {p1, v0}, Lcom/bianfeng/ymnshare/YmnShareInterface;->notifyResult(ILjava/lang/String;)V

    :goto_1
    return-void
.end method
