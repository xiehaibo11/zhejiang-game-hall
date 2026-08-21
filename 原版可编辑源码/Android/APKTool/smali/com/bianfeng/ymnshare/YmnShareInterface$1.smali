.class Lcom/bianfeng/ymnshare/YmnShareInterface$1;
.super Ljava/lang/Object;
.source "YmnShareInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnshare/YmnShareInterface;->shareImage(Ljava/util/LinkedHashMap;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

.field final synthetic val$param:Ljava/util/LinkedHashMap;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnshare/YmnShareInterface;Ljava/util/LinkedHashMap;)V
    .locals 0

    .line 256
    iput-object p1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->val$param:Ljava/util/LinkedHashMap;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 11

    const-string v0, "] = "

    const-string v1, "stringItem["

    .line 259
    iget-object v2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$000(Lcom/bianfeng/ymnshare/YmnShareInterface;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->clear()V

    :try_start_0
    const-string v2, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    const/4 v3, 0x0

    .line 264
    :try_start_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "ymnshare_wechat_morepic-->"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->val$param:Ljava/util/LinkedHashMap;

    invoke-virtual {v5}, Ljava/util/LinkedHashMap;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 265
    iget-object v4, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->val$param:Ljava/util/LinkedHashMap;

    const-string v5, "type"

    invoke-virtual {v4, v5}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    .line 266
    :try_start_2
    iget-object v5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->val$param:Ljava/util/LinkedHashMap;

    const-string v6, "content"

    invoke-virtual {v5, v6}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 267
    new-instance v5, Lorg/json/JSONObject;

    iget-object v6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->val$param:Ljava/util/LinkedHashMap;

    const-string v7, "images"

    invoke-virtual {v6, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v5, v6}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 268
    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 269
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "jsonImages.length() = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lorg/json/JSONObject;->length()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 270
    invoke-virtual {v5}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v6

    .line 271
    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_1

    .line 272
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 274
    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    const/16 v9, 0x9

    if-ge v8, v9, :cond_0

    .line 275
    iget-object v8, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v8}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v8

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v9

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    aput-object v10, v8, v9

    .line 276
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v9, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v9}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v9

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    aget-object v7, v9, v7

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    goto :goto_0

    .line 278
    :cond_0
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "key = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " more than 8, will be ignored"

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_0
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_0

    :catch_0
    move-exception v5

    goto :goto_1

    :catch_1
    move-exception v5

    const/4 v4, 0x0

    .line 282
    :goto_1
    :try_start_3
    invoke-virtual {v5}, Lorg/json/JSONException;->printStackTrace()V

    .line 285
    :cond_1
    :goto_2
    iget-object v5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v5

    array-length v5, v5

    if-ge v3, v5, :cond_5

    .line 287
    iget-object v5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v5

    aget-object v5, v5, v3

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 288
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v6

    aget-object v6, v6, v3

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    goto :goto_4

    .line 291
    :cond_2
    iget-object v5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v5

    aget-object v5, v5, v3

    const-string v6, "http"

    invoke-virtual {v5, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_3

    .line 292
    iget-object v5, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-virtual {v5}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getContext()Landroid/content/Context;

    move-result-object v5

    iget-object v6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v6

    aget-object v6, v6, v3

    invoke-static {v5, v6}, Lcom/bianfeng/ymnshare/utils/Tools;->saveImageToSdCard(Landroid/content/Context;Ljava/lang/String;)Ljava/io/File;

    move-result-object v5

    goto :goto_3

    .line 294
    :cond_3
    new-instance v5, Ljava/io/File;

    iget-object v6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$100(Lcom/bianfeng/ymnshare/YmnShareInterface;)[Ljava/lang/String;

    move-result-object v6

    aget-object v6, v6, v3

    invoke-direct {v5, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    :goto_3
    if-eqz v5, :cond_4

    .line 297
    iget-object v6, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v6}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$000(Lcom/bianfeng/ymnshare/YmnShareInterface;)Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_4
    :goto_4
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    .line 301
    :cond_5
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    const-string v1, "com.tencent.mm"

    if-nez v4, :cond_6

    .line 305
    :try_start_4
    new-instance v2, Landroid/content/ComponentName;

    const-string v3, "com.tencent.mm.ui.tools.ShareImgUI"

    invoke-direct {v2, v1, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    .line 307
    :cond_6
    new-instance v3, Landroid/content/ComponentName;

    const-string v4, "com.tencent.mm.ui.tools.ShareToTimeLineUI"

    invoke-direct {v3, v1, v4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "Kdescription"

    .line 308
    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-object v2, v3

    .line 310
    :goto_5
    invoke-virtual {v0, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    const-string v1, "android.intent.action.SEND_MULTIPLE"

    .line 311
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "image/*"

    .line 312
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    .line 314
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 315
    iget-object v2, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-static {v2}, Lcom/bianfeng/ymnshare/YmnShareInterface;->access$000(Lcom/bianfeng/ymnshare/YmnShareInterface;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_6
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_7

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/io/File;

    .line 316
    invoke-static {v3}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_6

    :cond_7
    const-string v2, "android.intent.extra.STREAM"

    .line 318
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putParcelableArrayListExtra(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;

    .line 319
    iget-object v1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    invoke-virtual {v1}, Lcom/bianfeng/ymnshare/YmnShareInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    const v2, 0x1e248

    invoke-virtual {v1, v0, v2}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_7

    :catch_2
    move-exception v0

    .line 321
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 322
    iget-object v1, p0, Lcom/bianfeng/ymnshare/YmnShareInterface$1;->this$0:Lcom/bianfeng/ymnshare/YmnShareInterface;

    const/16 v2, 0x322

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "ymnshare_wechat_morepic"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v2, v0, v4}, Lcom/bianfeng/ymnshare/YmnShareInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_7
    return-void
.end method
