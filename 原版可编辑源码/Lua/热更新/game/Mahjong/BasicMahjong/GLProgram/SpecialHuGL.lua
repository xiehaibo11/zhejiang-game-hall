local SpecialHuGL = {}

local vs = [[
attribute vec4 a_position;
attribute vec2 a_texCoord;
attribute vec4 a_color;
#ifdef GL_ES
varying lowp vec4 v_fragmentColor;
varying mediump vec2 v_texCoord;
#else
varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
#endif

void main() {
  gl_Position = CC_PMatrix * a_position;
  v_fragmentColor = a_color;
 vec2 t_texCoord = vec2(0.0,0.0);
 if(a_position.x>0.0){
    t_texCoord.x = 1.0;
 }else{
    t_texCoord.x = 0.0;
 }
  if(a_position.y>0.0){
    t_texCoord.y = 1.0;
 }else{
    t_texCoord.y = 0.0;
 }
  v_texCoord = t_texCoord;
}]]

local fs = [[
#ifdef GL_ES
precision lowp float;
#endif

uniform float t;
uniform float maxScale;
varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
const vec2 centerpos = vec2(0.5, 0.5);
const float scaleStart = 0.5;
const float scaleEnd = 2.0;
const float scaleTime = 30.0;

float getMaxScale(){
    if(maxScale > 3.0){
        return 3.0;
    }else if(maxScale < 1.5){
        return 1.5;
    }else{
        return maxScale;
    }
}

float getScale(){
    return (getMaxScale()-0.5)*pow(t/30.0,2.0)+0.5;
}

float getScale2(){
    return (getMaxScale()-1.0)*pow((t-35.0)/5.0,2.0)+1.0;
}

float getScale3(){
    return (getMaxScale()-1.0)*(35.0-t)/5.0+1.0;
}

float getScale4(){
    return -0.5*pow((t-55.0)/20.0,2.0)+1.5;
}

float getScale5(){
    return pow((t-55.0)/20.0,2.0);
}

vec2 scale(vec2 texCoord, float rate){
    return (texCoord - centerpos) / rate + centerpos;
}

vec4 glOneMinusSrcAlpha(vec4 src, vec4 dst){
    return src + dst * (1.0 - src.a);
}

vec4 glSrcAlpha(vec4 src, vec4 dst){
    return src + dst * src.a;
}

vec4 radialBlur(vec2 texCoord, float range){
    if(range == 0.0){
        return texture2D(CC_Texture0, texCoord);
    }
    vec2 os = centerpos - texCoord;
    float f_ins = 1.0 / 960.0;
    float dis = max(sqrt(os.x * os.x + os.y * os.y), f_ins * 0.1);
    float num = floor(dis * (range + 20.0)) + 1.0;
    float rate = 1.0 / num;
    vec2 st = vec2(f_ins * os.x / dis, f_ins * os.y / dis);
    vec4 sc = texture2D(CC_Texture0, texCoord);
    vec4 c = vec4(0.0, 0.0, 0.0, 0.0);

    os = texCoord;
    for (float i = 1.0; i < num; i += 1.0)
    {
        os += st;
        c += texture2D(CC_Texture0, os) * rate;
    }
    return c + sc * rate;
}

void main()
{
    if(t>=0.0 && t<=5.0){
        vec4 src = texture2D(CC_Texture0, scale(v_texCoord,getScale()));
        vec4 ans = glOneMinusSrcAlpha(src, radialBlur(scale(v_texCoord,getScale()), 20.0*t));
        ans.a = ans.a * t * 0.08;
        gl_FragColor = ans;
    }else if(t>5.0 && t<=13.0){
        vec4 src = texture2D(CC_Texture0, scale(v_texCoord,getScale()));
        vec4 ans = glOneMinusSrcAlpha(src, radialBlur(scale(v_texCoord,getScale()), (30.0-t)*2.0+40.0)) + glSrcAlpha(src, src);
        ans.a = ans.a * t * 0.08;
        gl_FragColor = ans;
    }else if(t>13.0 && t<=30.0){
        vec4 src = texture2D(CC_Texture0, scale(v_texCoord,getScale()));
        gl_FragColor = glOneMinusSrcAlpha(src, radialBlur(scale(v_texCoord,getScale()), (30.0-t)*2.0+40.0)) + glSrcAlpha(src, src);
    }else if(t>30.0 && t<=35.0){
        vec4 src = texture2D(CC_Texture0, scale(v_texCoord,getScale2()));
        vec4 src2 = texture2D(CC_Texture0, scale(v_texCoord,getScale3()));
        src2.a = src2.a * (35.0-t)/5.0;
        gl_FragColor = glOneMinusSrcAlpha(src, radialBlur(scale(v_texCoord,getScale2()), (35.0-t)*5.0)) + glSrcAlpha(src, src) + glSrcAlpha(src2, src2);
    }else if(t>35.0 && t<=50.0){
        vec4 src = texture2D(CC_Texture0, v_texCoord,getScale2());
        vec4 src2 = texture2D(CC_Texture0, scale(v_texCoord,getScale4()));
        src2.a = src2.a * getScale5();
        vec4 src3 = glSrcAlpha(src2, src2) * getScale5();
        gl_FragColor = src + glSrcAlpha(src, src) + src3;
    }else if(t>50.0 && t<=55.0){
        vec4 src = texture2D(CC_Texture0, v_texCoord);
        vec4 src2 = texture2D(CC_Texture0, scale(v_texCoord,getScale4()));
        src2.a = src2.a * getScale5();
        vec4 src3 = glSrcAlpha(src2, src2) * getScale5();
        gl_FragColor = src + glSrcAlpha(src, src) * (60.0-t)/10.0 + src3;
    }else if(t>55.0 && t<=60.0){
        vec4 src = texture2D(CC_Texture0, v_texCoord);
        gl_FragColor = src + glSrcAlpha(src, src) * (60.0-t)/10.0;
    }else{
        gl_FragColor = texture2D(CC_Texture0, v_texCoord);
    }
}
]]

function SpecialHuGL.show(node, callback, maxScale)
    if node == nil then
        return
    end
    maxScale = maxScale or 3

    local glProgram = cc.GLProgramCache:getInstance():getGLProgram("SpecialHuGL")
    if not glProgram then
        glProgram = cc.GLProgram:createWithByteArrays(vs, fs)
        cc.GLProgramCache:getInstance():addGLProgram(glProgram, "SpecialHuGL")
    end
    node:setGLProgram(glProgram)
    node:getGLProgramState():setUniformFloat("maxScale", maxScale)

    SpecialHuGL.setUniformFloat(node, 0)
    SpecialHuGL.stop(node._playScheduler)
    local _playScheduler
    local startTime = 0

    _playScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if startTime == 0 then
            startTime = socket.gettime()
        end
        local t = (socket.gettime() - startTime) * 60
        SpecialHuGL.setUniformFloat(node, t)
        if t > 70 then
            SpecialHuGL.stop(_playScheduler)
            if node then
                node._playScheduler = nil
            end
            if type(callback) == "function" then
                callback()
            end
        end
    end, 1 / 60, false)
    node._playScheduler = _playScheduler
end

function SpecialHuGL.setUniformFloat(node, t)
    if node == nil then
        return
    end
    pcall(function()
        node:getGLProgramState():setUniformFloat("t", t)
    end)
end

function SpecialHuGL.stop(playScheduler)
    if playScheduler then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(playScheduler)
    end
end

return SpecialHuGL