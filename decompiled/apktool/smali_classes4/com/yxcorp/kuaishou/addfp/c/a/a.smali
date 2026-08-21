.class public final Lcom/yxcorp/kuaishou/addfp/c/a/a;
.super Ljava/lang/Object;


# direct methods
.method public static a(Ljava/lang/String;Z)Lcom/yxcorp/kuaishou/addfp/android/b/e;
    .locals 11

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/String;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const/4 p0, 0x0

    const/4 v3, -0x1

    :try_start_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v4
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_d
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_b
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    if-eqz p1, :cond_0

    const-string p1, "su"

    goto :goto_0

    :cond_0
    const-string p1, "sh"

    :goto_0
    :try_start_1
    invoke-virtual {v4, p1}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object p1
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_d
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_b
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    :try_start_2
    new-instance v4, Ljava/io/DataOutputStream;

    invoke-virtual {p1}, Ljava/lang/Process;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v5

    invoke-direct {v4, v5}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_a
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_9
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    move v5, v2

    :goto_1
    if-gtz v5, :cond_2

    :try_start_3
    aget-object v6, v1, v2

    if-eqz v6, :cond_1

    invoke-virtual {v6}, Ljava/lang/String;->getBytes()[B

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/io/DataOutputStream;->write([B)V

    const-string v6, "\n"

    invoke-virtual {v4, v6}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/io/DataOutputStream;->flush()V

    :cond_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_2
    const-string v1, "exit\n"

    invoke-virtual {v4, v1}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/io/DataOutputStream;->flush()V

    invoke-virtual {p1}, Ljava/lang/Process;->waitFor()I

    move-result v3

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v6, Ljava/io/BufferedReader;

    new-instance v7, Ljava/io/InputStreamReader;

    invoke-virtual {p1}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object v8

    invoke-direct {v7, v8}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v6, v7}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_8
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_7
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :try_start_4
    new-instance v7, Ljava/io/BufferedReader;

    new-instance v8, Ljava/io/InputStreamReader;

    invoke-virtual {p1}, Ljava/lang/Process;->getErrorStream()Ljava/io/InputStream;

    move-result-object v9

    invoke-direct {v8, v9}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v7, v8}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_6
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_5
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :goto_2
    :try_start_5
    invoke-virtual {v6}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v8
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    const-string v9, "|"

    if-eqz v8, :cond_3

    :try_start_6
    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_3
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_4
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :try_start_7
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v8

    if-lez v8, :cond_4

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v8

    sub-int/2addr v8, v0

    invoke-virtual {v1, v2, v8}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    :cond_4
    :goto_3
    invoke-virtual {v7}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v8

    if-eqz v8, :cond_5

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    :cond_5
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v5

    if-lez v5, :cond_6

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v5

    sub-int/2addr v5, v0

    invoke-virtual {p0, v2, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_2
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    :cond_6
    :try_start_8
    invoke-virtual {v4}, Ljava/io/DataOutputStream;->close()V

    invoke-virtual {v6}, Ljava/io/BufferedReader;->close()V

    invoke-virtual {v7}, Ljava/io/BufferedReader;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_0

    goto/16 :goto_16

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    goto/16 :goto_16

    :catch_1
    move-exception v0

    move-object v10, v0

    move-object v0, p0

    move-object p0, v1

    move-object v1, v10

    goto :goto_4

    :catch_2
    move-exception v0

    move-object v10, v0

    move-object v0, p0

    move-object p0, v1

    move-object v1, v10

    goto :goto_5

    :catchall_0
    move-exception p0

    goto/16 :goto_17

    :catch_3
    move-exception v0

    move-object v1, v0

    move-object v0, p0

    :goto_4
    move-object v2, v1

    move-object v1, p1

    move-object p1, p0

    goto :goto_6

    :catch_4
    move-exception v0

    move-object v1, v0

    move-object v0, p0

    :goto_5
    move-object v2, v1

    move-object v1, p1

    move-object p1, p0

    goto :goto_7

    :catchall_1
    move-exception v0

    move-object v7, p0

    goto/16 :goto_18

    :catch_5
    move-exception v0

    move-object v1, v0

    move-object v0, p0

    move-object v7, v0

    move-object v2, v1

    move-object v1, p1

    move-object p0, v4

    goto/16 :goto_a

    :catch_6
    move-exception v0

    move-object v1, v0

    move-object v0, p0

    move-object v7, v0

    move-object v2, v1

    move-object v1, p1

    move-object p0, v4

    goto/16 :goto_10

    :catchall_2
    move-exception v0

    move-object v6, p0

    move-object v7, v6

    goto/16 :goto_18

    :catch_7
    move-exception v0

    move-object v6, p0

    move-object v7, v6

    move-object v1, p1

    move-object v2, v0

    move-object p1, v7

    move-object v0, p1

    :goto_6
    move-object p0, v4

    goto :goto_b

    :catch_8
    move-exception v0

    move-object v6, p0

    move-object v7, v6

    move-object v1, p1

    move-object v2, v0

    move-object p1, v7

    move-object v0, p1

    :goto_7
    move-object p0, v4

    goto :goto_11

    :catchall_3
    move-exception v0

    goto :goto_8

    :catch_9
    move-exception v0

    move-object v1, v0

    goto :goto_9

    :catch_a
    move-exception v0

    move-object v1, v0

    goto :goto_f

    :catchall_4
    move-exception p1

    move-object v0, p1

    move-object p1, p0

    :goto_8
    move-object v6, p0

    move-object v7, v6

    goto/16 :goto_19

    :catch_b
    move-exception p1

    move-object v1, p1

    move-object p1, p0

    :goto_9
    move-object v0, p0

    move-object v6, v0

    move-object v7, v6

    move-object v2, v1

    move-object v1, p1

    :goto_a
    move-object p1, v7

    :goto_b
    :try_start_9
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_5

    if-eqz p0, :cond_7

    :try_start_a
    invoke-virtual {p0}, Ljava/io/DataOutputStream;->close()V

    goto :goto_c

    :catch_c
    move-exception p0

    goto :goto_d

    :cond_7
    :goto_c
    if-eqz v6, :cond_8

    invoke-virtual {v6}, Ljava/io/BufferedReader;->close()V

    :cond_8
    if-eqz v7, :cond_9

    invoke-virtual {v7}, Ljava/io/BufferedReader;->close()V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_c

    goto :goto_e

    :goto_d
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_9
    :goto_e
    if-eqz v1, :cond_d

    goto :goto_15

    :catch_d
    move-exception p1

    move-object v1, p1

    move-object p1, p0

    :goto_f
    move-object v0, p0

    move-object v6, v0

    move-object v7, v6

    move-object v2, v1

    move-object v1, p1

    :goto_10
    move-object p1, v7

    :goto_11
    :try_start_b
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_5

    if-eqz p0, :cond_a

    :try_start_c
    invoke-virtual {p0}, Ljava/io/DataOutputStream;->close()V

    goto :goto_12

    :catch_e
    move-exception p0

    goto :goto_13

    :cond_a
    :goto_12
    if-eqz v6, :cond_b

    invoke-virtual {v6}, Ljava/io/BufferedReader;->close()V

    :cond_b
    if-eqz v7, :cond_c

    invoke-virtual {v7}, Ljava/io/BufferedReader;->close()V
    :try_end_c
    .catch Ljava/io/IOException; {:try_start_c .. :try_end_c} :catch_e

    goto :goto_14

    :goto_13
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_c
    :goto_14
    if-eqz v1, :cond_d

    :goto_15
    move-object p0, v0

    move-object v10, v1

    move-object v1, p1

    move-object p1, v10

    :goto_16
    invoke-virtual {p1}, Ljava/lang/Process;->destroy()V

    move-object v0, p0

    move-object p1, v1

    :cond_d
    new-instance p0, Lcom/yxcorp/kuaishou/addfp/android/b/e;

    invoke-direct {p0, v3, p1, v0}, Lcom/yxcorp/kuaishou/addfp/android/b/e;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    return-object p0

    :catchall_5
    move-exception p1

    move-object v4, p0

    move-object p0, p1

    move-object p1, v1

    :goto_17
    move-object v0, p0

    :goto_18
    move-object p0, v4

    :goto_19
    if-eqz p0, :cond_e

    :try_start_d
    invoke-virtual {p0}, Ljava/io/DataOutputStream;->close()V

    goto :goto_1a

    :catch_f
    move-exception p0

    goto :goto_1b

    :cond_e
    :goto_1a
    if-eqz v6, :cond_f

    invoke-virtual {v6}, Ljava/io/BufferedReader;->close()V

    :cond_f
    if-eqz v7, :cond_10

    invoke-virtual {v7}, Ljava/io/BufferedReader;->close()V
    :try_end_d
    .catch Ljava/io/IOException; {:try_start_d .. :try_end_d} :catch_f

    goto :goto_1c

    :goto_1b
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_10
    :goto_1c
    if-eqz p1, :cond_11

    invoke-virtual {p1}, Ljava/lang/Process;->destroy()V

    :cond_11
    throw v0
.end method

.method public static a()Ljava/lang/String;
    .locals 6

    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    const-string v1, "XIAOMI"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    const-string v3, ""

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-nez v2, :cond_0

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "REDMI"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "MEITU"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "ro.miui.ui.version.name"

    invoke-static {v1, v3}, Lcom/yxcorp/kuaishou/addfp/c/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    move v1, v4

    goto :goto_0

    :cond_0
    move v1, v5

    :goto_0
    if-nez v1, :cond_c

    const-string v1, "BLACKSHARK"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    move v1, v4

    goto :goto_1

    :cond_1
    move v1, v5

    :goto_1
    if-nez v1, :cond_c

    const-string v1, "SAMSUNG"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_2

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    move v1, v4

    goto :goto_2

    :cond_2
    move v1, v5

    :goto_2
    if-eqz v1, :cond_3

    const-string v0, "3"

    goto/16 :goto_7

    :cond_3
    const-string v1, "VIVO"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_4

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "IQOO"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "ro.vivo.os.version"

    invoke-static {v1, v3}, Lcom/yxcorp/kuaishou/addfp/c/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    move v1, v4

    goto :goto_3

    :cond_4
    move v1, v5

    :goto_3
    if-eqz v1, :cond_5

    const-string v0, "2"

    goto/16 :goto_7

    :cond_5
    const-string v1, "HUAWEI"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_6

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_6

    move v1, v4

    goto :goto_4

    :cond_6
    move v1, v5

    :goto_4
    if-eqz v1, :cond_7

    const-string v0, "1"

    goto :goto_7

    :cond_7
    const-string v1, "OPPO"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_8

    sget-object v2, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_8

    const-string v1, "REALME"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_8

    const-string v1, "ro.build.version.opporom"

    invoke-static {v1, v3}, Lcom/yxcorp/kuaishou/addfp/c/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_8

    move v1, v4

    goto :goto_5

    :cond_8
    move v1, v5

    :goto_5
    if-nez v1, :cond_b

    const-string v1, "ONEPLUS"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_9

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_9

    goto :goto_6

    :cond_9
    move v4, v5

    :goto_6
    if-nez v4, :cond_b

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    const-string v1, "HONOR"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    const-string v0, "7"

    goto :goto_7

    :cond_a
    const-string v0, "0"

    goto :goto_7

    :cond_b
    const-string v0, "5"

    goto :goto_7

    :cond_c
    const-string v0, "4"

    :goto_7
    return-object v0
.end method

.method public static a(ILjava/lang/String;)Ljava/lang/String;
    .locals 8

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->instance()Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;

    move-result-object v0

    invoke-virtual {v0}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->getParamContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    new-instance v2, Ljava/lang/String;

    const/4 v3, 0x0

    const-string v4, "U3lzdGVtQFNlY3VyZUBHbG9iYWw="

    invoke-static {v4, v3}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v4

    invoke-direct {v2, v4}, Ljava/lang/String;-><init>([B)V

    const-string v4, "@"

    invoke-virtual {v2, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    aget-object v5, v2, v3

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v5, 0x1

    aget-object v6, v2, v5

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v6, 0x2

    aget-object v7, v2, v6

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p0, :cond_3

    if-eq p0, v5, :cond_2

    if-ne p0, v6, :cond_1

    aget-object p0, v2, v6

    invoke-static {v0, p0, p1}, Lcom/yxcorp/kuaishou/addfp/android/b/a;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/provider/Settings$Global;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_1
    move-object p0, v1

    goto :goto_0

    :cond_2
    aget-object p0, v2, v5

    invoke-static {v0, p0, p1}, Lcom/yxcorp/kuaishou/addfp/android/b/a;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_3
    aget-object p0, v2, v3

    invoke-static {v0, p0, p1}, Lcom/yxcorp/kuaishou/addfp/android/b/a;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :cond_4
    :goto_0
    if-nez p0, :cond_5

    goto :goto_1

    :cond_5
    move-object v1, p0

    :goto_1
    return-object v1
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 8

    const-string v0, "k_w_o_d_out_dtt"

    const-string v1, "KWE_N"

    :try_start_0
    invoke-static {p0, v0}, Lcom/yxcorp/kuaishou/addfp/c/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v4, "Lm91a2R0ZnQ="

    const-string v5, "android.permission.WRITE_EXTERNAL_STORAGE"

    const-string v6, "android.permission.READ_EXTERNAL_STORAGE"

    const-string v7, ""

    if-eqz v3, :cond_1

    :try_start_1
    filled-new-array {v6, v5}, [Ljava/lang/String;

    move-result-object v3

    invoke-static {p0, v3}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Landroid/content/Context;[Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-static {p0}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->a(Landroid/content/Context;)Lcom/yxcorp/kuaishou/addfp/android/a/d;

    move-result-object v3

    invoke-virtual {v3, v4}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    if-nez v3, :cond_2

    :try_start_2
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v3

    invoke-static {v3, v0, v7}, Landroid/provider/Settings$System;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :cond_0
    const-string v0, "KWE_PN"

    goto :goto_1

    :cond_1
    :try_start_3
    filled-new-array {v6, v5}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/yxcorp/kuaishou/addfp/android/b/g;->a(Landroid/content/Context;[Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {p0}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->a(Landroid/content/Context;)Lcom/yxcorp/kuaishou/addfp/android/a/d;

    move-result-object v0

    invoke-virtual {v0, v4}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {p0, v2}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->a(Landroid/content/Context;Ljava/lang/String;)V

    :catchall_0
    :cond_2
    :goto_0
    move-object v0, v1

    :goto_1
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    goto :goto_3

    :cond_3
    invoke-static {p0}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->a(Landroid/content/Context;)Lcom/yxcorp/kuaishou/addfp/android/a/d;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->b(Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->size()I

    move-result v2

    if-nez v2, :cond_5

    :cond_4
    invoke-static {p0}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->a(Landroid/content/Context;)Lcom/yxcorp/kuaishou/addfp/android/a/d;

    move-result-object p0

    invoke-virtual {p0, v7}, Lcom/yxcorp/kuaishou/addfp/android/a/d;->b(Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    :cond_5
    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->size()I

    move-result p0

    if-lez p0, :cond_8

    const/4 p0, 0x0

    new-instance v2, Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->listIterator(I)Ljava/util/ListIterator;

    move-result-object v1

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :catchall_1
    :goto_2
    invoke-interface {v1}, Ljava/util/ListIterator;->hasPrevious()Z

    move-result v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz v3, :cond_7

    const/16 v3, 0xa

    if-ge p0, v3, :cond_7

    :try_start_4
    invoke-interface {v1}, Ljava/util/ListIterator;->previous()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    if-eqz v3, :cond_6

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :cond_6
    add-int/lit8 p0, p0, 0x1

    goto :goto_2

    :cond_7
    :try_start_5
    invoke-virtual {v2}, Lorg/json/JSONObject;->length()I

    move-result p0

    if-lez p0, :cond_8

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    return-object p0

    :cond_8
    move-object v1, v0

    goto :goto_3

    :catchall_2
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const-string v1, "KWE_PE"

    :goto_3
    return-object v1
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const-string p0, ""

    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    :try_start_0
    const-string v0, "android.os.SystemProperties"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "get"

    const/4 v2, 0x2

    :try_start_1
    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p0, v2, v5

    aput-object p1, v2, v6

    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    if-nez p0, :cond_0

    const-string p0, ""

    :cond_0
    return-object p0
.end method
